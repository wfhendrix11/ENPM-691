#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char c;
  int i;
  char d;
} S4;

typedef struct {
  int i;
  char c;
  char d;
} S5;

int main()
{
  printf("Size of S4:%lu\n", sizeof(S4));
  printf("Size of S5:%lu\n", sizeof(S5));

  return 0; 
}


