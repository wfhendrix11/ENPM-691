/* Program to demonstrate arithmetic  right shift */

#include <stdio.h>

int max(int a, int b)
{
  int c = a-b;

  int s = c >> 31; /* s has the sign bit*/

  return a+s*c;
}

int main()
{
  int a, b;

  printf("Enter two ints:");
  scanf("%d %d", &a, &b);

  printf("Max is:%d\n", max(a, b));

  return 0;
}
