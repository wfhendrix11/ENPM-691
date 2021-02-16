/* This program is used for demonstrating how to activate dead code using buffer overflow attacks*/

#include <stdio.h>
#include <stdlib.h>

void deadCode()
{
  printf("I'm alive!");
  exit(0);
}

void getData()
{
  char buffer[4];
  gets(buffer);
  puts(buffer);
}

int main()
{
  getData();
  return 0;
}
