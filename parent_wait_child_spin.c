#include <stdio.h>
#include <stdlib.h>

volatile int done = 0;

void * child(void *arg) {
   printf("child\n");
   done = 1;
   return NULL;
}

int main(int argc, char* argv[]) {
   printf("parent: begin\n");
   pthread_t c;
   pthread_create(&c, NULL, child, NULL); // create a child
   while (done == 0)
     ; //spin
   printf("parent: end\n");
   return 0;
}

