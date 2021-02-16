#include <semaphore.h>
#include <stdlib.h>
#include <stdio.h>

/* Semaphore signal demo */

sem_t sem;

void *child(void *arg)
{
   printf("child\n");
   // signal here: child is done
   sem_post(&sem);
   return NULL;
}


int main()
{
   sem_init(&sem, 0, 0);
   printf("parent:begin\n");
   pthread_t c;
   pthread_create(c, NULL, child, NULL);
   // wait here for child
   sem_wait(&sem);
   printf("parent:end\n");
   return 0;
}
