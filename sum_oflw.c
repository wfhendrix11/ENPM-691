/* This program will be used for investigating the overflow flags set in the eflags register */
#include <limits.h>

int sum(int x, int y)
{
  int t = x + y;
  return t;
}

int main()
{
  return sum(1, INT_MAX);
}
