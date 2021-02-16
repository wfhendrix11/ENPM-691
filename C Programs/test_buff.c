/* This program is used for demonstrating how to corrupt the return address */

#include <stdio.h>

void Test()
{
  char buff[4];
  gets(buff);
  puts(buff); 
}

int main()
{
  Test();
  return 0;
}
