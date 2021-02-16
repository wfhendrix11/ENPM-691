#include <stdio.h>

typedef struct {
  char c;
  int i[2];
  double v;
} S1;

int main()
{
  S1 s;
  
  printf("Addr of s = %p\n", &s);
  printf("Addr of s.c = %p\n", &s.c);
  printf("Addr of s.i[0] = %p\n", &s.i[0]);
  printf("Addr of s.i[1] = %p\n", &s.i[1]);
  printf("Addr of v = %p\n", &s.v);

  return 0;
}

