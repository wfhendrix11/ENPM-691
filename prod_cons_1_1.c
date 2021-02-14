/* 1 producer and 1 consumer */

#include <stdio.h>
#include <pthread.h>

#define MAX_LIMIT 5

extern void put(int value);
extern int get(void);

pthread_mutex_t mutex;
pthread_cond_t cond;

extern int count;

void *producer(void *arg) {
   int i;
   int loops = (int) arg;
   for (i = 0; i < loops; i++) {
      pthread_mutex_lock(&mutex);
      if (count == 1)
        pthread_cond_wait(&cond, &mutex);
      put(i);
      pthread_cond_signal(&cond);
      pthread_mutex_unlock(&mutex); 
   }
}


void *consumer(void *arg) {
    int i;
    while(1) {
       pthread_mutex_lock(&mutex);
       if(count == 0)
         pthread_cond_wait(&cond, &mutex);
       int tmp = get();
       printf("%d\n", tmp);
       pthread_cond_signal(&cond);
       pthread_mutex_unlock(&mutex);
    }
}


void main()
{
   pthread_t t1, t2;
   pthread_mutex_init(&mutex, NULL);
   pthread_cond_init(&cond, NULL);

   pthread_create(&t1, NULL, producer, (void*)MAX_LIMIT);
   pthread_create(&t2, NULL, consumer, NULL);

   pthread_join(t1, NULL);
   pthread_join(t2, NULL);
}

