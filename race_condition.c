#include <pthread.h>
#include <assert.h>

int i = 0;

void *thread1(void *e) {
   i = i+1;
}

void *thread2(void *e) {
    i = i-1;
}

int main()
{
  pthread_t tid, tid2;
  pthread_create( &tid, 0, thread1, 0);
  pthread_create( &tid2, 0, thread2, 0);
  pthread_join(tid, 0); pthread_join(tid2, 0);
  assert(i == 1 || i == 0 || i == -1);
  return 1;
}
