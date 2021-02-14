

#include <stdio.h>
#include <pthread.h>
#include <assert.h>

int count = 0;

void *inc(void* data)
{
   count++;
}

void main()
{
   pthread_t t1, t2;

   pthread_create(&t1, NULL, inc, NULL);
   pthread_create(&t2, NULL, inc, NULL);

   pthread_join(t1, NULL);
   pthread_join(t2, NULL);

   assert(count == 2);
}


