#include <stdio.h>

int main()
{
  short int x = 15213;
  int ix = (int) x;
  short int y = -15213;
  int iy = (int) y;
  
  printf("ix=%d, iy=%d\n", ix, iy);
  return 0;
}
