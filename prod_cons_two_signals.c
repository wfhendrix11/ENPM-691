/* 1 producer; 2 consumers; two signals (fill, empty) */

#include <stdio.h>
#include <pthread.h>

extern void put(int value);
extern int get(void);

pthread_mutex_t mutex;
pthread_cond_t empty;
pthread_cond_t fill;

extern int count;

#define MAX_LIMIT 5

void *producer(void *arg) {
   int i;
   int loops = (int) arg;
   for (i = 0; i < loops; i++) {
      pthread_mutex_lock(&mutex);
      while (count == 1)
        pthread_cond_wait(&empty, &mutex);
      put(i);
      pthread_cond_signal(&fill);
      pthread_mutex_unlock(&mutex); 
   }
}


void *consumer(void *arg) {
    int i;
    while(1) {
       pthread_mutex_lock(&mutex);
       while(count == 0)
         pthread_cond_wait(&fill, &mutex);
       int tmp = get();
       printf("%d\n", tmp);
       pthread_cond_signal(&empty);
       pthread_mutex_unlock(&mutex);
    }
}


void main()
{
   pthread_t t1, t2, t3;
   pthread_mutex_init(&mutex, NULL);
   pthread_cond_init(&fill, NULL);
   pthread_cond_init(&empty, NULL);

   pthread_create(&t1, NULL, producer, (void*)MAX_LIMIT);
   pthread_create(&t2, NULL, consumer, NULL);
   pthread_create(&t3, NULL, consumer, NULL);

   pthread_join(t1, NULL);
   pthread_join(t2, NULL);
   pthread_join(t3, NULL);
}

