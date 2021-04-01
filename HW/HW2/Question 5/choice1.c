#include <stdio.h>

int main() 
{
	choice1(1);
	return 0;
	
}

int choice1(int x) {

	return (x<<2);
}

/*
   0x080483ef <+0>:	push   %ebp
   0x080483f0 <+1>:	mov    %esp,%ebp
   0x080483f2 <+3>:	mov    0x8(%ebp),%eax
   0x080483f5 <+6>:	shl    $0x2,%eax
   0x080483f8 <+9>:	pop    %ebp
   0x080483f9 <+10>:	ret 
*/
