/* This program is used for investigating the zf flag of the register */
#include <stdio.h>

int main()
{
  int x = 1, y = 2;

  if(x & y)
    return 1;
  else
    return 0; 
}
