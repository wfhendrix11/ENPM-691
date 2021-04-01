#include <stdio.h>

int main() 
{
	choice3(1);
	return 0;
	
}

int choice3(int x) {

	return x*x+12;
}

/*
   0x080483ef <+0>:	push   %ebp
   0x080483f0 <+1>:	mov    %esp,%ebp
   0x080483f2 <+3>:	mov    0x8(%ebp),%eax
   0x080483f5 <+6>:	imul   0x8(%ebp),%eax
   0x080483f9 <+10>:	add    $0xc,%eax
   0x080483fc <+13>:	pop    %ebp
   0x080483fd <+14>:	ret 
*/
