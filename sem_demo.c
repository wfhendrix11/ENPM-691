#include <pthread.h>
#include <semaphore.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

void *doSomething1();
void *doSomething2();
void *doSomething3();


sem_t sem;

int main() {
    // initialize semaphore to 2
    sem_init(&sem, 1, 2);

    pthread_t thread1, thread2, thread3;

    pthread_create(&thread1, NULL, &doSomething1, NULL);
    pthread_create(&thread2, NULL, &doSomething2, NULL);
    pthread_create(&thread3, NULL, &doSomething3, NULL);

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    pthread_join(thread3, NULL);

    return 0;
}

void doSomething(char c) {
    int i, time;

    for (i = 0; i < 3; i++) {

      if (sem_wait(&sem) == 0) {

          time = (int)((double)rand() /RAND_MAX * 30);

          printf("Thread %c enters and sleeps for %d seconds\n", c, time);

          sleep(time);

          printf("Thread %c leaves the critical section\n", c);

          sem_post(&sem);
       }

    }

}


void *doSomething1() {

      doSomething('A');

      return 0;

}

void *doSomething2() {

      doSomething('B');

      return 0;

}

void *doSomething3() {

      doSomething('C');

      return 0;

}


