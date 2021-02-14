/* This program will be used for investigating the carry flag in the eflags register */
#include <limits.h>

unsigned int sum(unsigned int x, unsigned int y)
{
  unsigned int t = x + y;
  return t;
}

int main()
{
  return sum(2, UINT_MAX);
}
