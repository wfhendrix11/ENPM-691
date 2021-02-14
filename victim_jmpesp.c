#include <stdio.h>
#include <string.h>

void jmpesp() {
   __asm__("jmp *%esp");
}


int main(int argc, char** argv)
{
  char buffer[80];
  
  strcpy(buffer, argv[1]);

  return 0; 
}


