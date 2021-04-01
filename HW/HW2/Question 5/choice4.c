#include <stdio.h>

int main() 
{
	choice4(1);
	return 0;
	
}

int choice4(int x) {

	return x/16;
}

/*
   0x080483ef <+0>:	push   %ebp
   0x080483f0 <+1>:	mov    %esp,%ebp
   0x080483f2 <+3>:	mov    0x8(%ebp),%eax
   0x080483f5 <+6>:	lea    0xf(%eax),%edx
   0x080483f8 <+9>:	test   %eax,%eax
   0x080483fa <+11>:	cmovs  %edx,%eax
   0x080483fd <+14>:	sar    $0x4,%eax
   0x08048400 <+17>:	pop    %ebp
   0x08048401 <+18>:	ret 
*/
