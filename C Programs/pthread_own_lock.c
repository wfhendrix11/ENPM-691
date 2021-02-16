#include <stdio.h>
#include <pthread.h>
#include <assert.h>

typedef struct __lock_t {
   int flag;
} lock_t;

void init(lock_t *mutex) {
   // 0 -> lock is available, 1 -> held
   mutex->flag = 0;
}

void lock(lock_t *mutex) {
     while (mutex->flag == 1)
        ; // spin-wait 
     mutex->flag = 1;
}


void unlock(lock_t *mutex) {
    mutex->flag = 0;
}


int count = 0;
lock_t mutex;

void *incThread(void *args)
{
  lock(&mutex);
   count++;
  unlock(&mutex);
}

void *decThread(void *args)
{
  lock(&mutex);
   count--;
  unlock(&mutex);
}


int main()
{
    pthread_t tid, tid2;
    init(&mutex);

    pthread_create(&tid, 0, incThread, 0);
    pthread_create(&tid2, 0, decThread, 0);

    pthread_join(tid, 0);
    pthread_join(tid2, 0);

    assert(count == 0);
    printf(".");

    return 1;
}
