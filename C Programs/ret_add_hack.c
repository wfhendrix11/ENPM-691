/* Program to demonstrate how to run machine code from C */

#include<stdio.h>

/*
  400078:	b8 01 00 00 00       	mov    $0x1,%eax
  40007d:	bb 02 00 00 00       	mov    $0x2,%ebx
  400082:	cd 80                	int    $0x80
*/

char shellcode[] = "\xb8\x01\x00\x00\x00"
                   "\xbb\x02\x00\x00\x00"
                   "\xcd\x80";

int main()
{
  int *ret;
  ret = (int*)&ret + 2;
  (*ret)=(int)shellcode;
}
              
