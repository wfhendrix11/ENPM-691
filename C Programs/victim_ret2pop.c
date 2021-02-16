/*
  Program to demonstrate retpop hack
*/

#include <string.h>

void function(int x, char* str)
{
  char buffer[4];
  strcpy(buffer, str);
}

int main(int argc, char** argv)
{
   function(10, argv[1]);
   return 1;
}
