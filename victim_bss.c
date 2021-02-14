#include <string.h>
#include <stdio.h>

char globalbuff[80];

int main(int argc, char** argv)
{
  char localbuff[80];
  
  strcpy(localbuff, argv[1]);
  
  // copy the localbuff to the global buff
  strcpy(globalbuff, localbuff);
 
  printf("Address of globalbuff:%p\n", globalbuff); 
  return 0; 
}


