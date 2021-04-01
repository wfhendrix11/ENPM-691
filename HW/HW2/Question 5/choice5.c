#include <stdio.h>

int main() 
{
	choice5(1);
	return 0;
	
}

int choice5(int x) {

	return x*12+x;
}

/*
   0x080483ef <+0>:	push   %ebp
   0x080483f0 <+1>:	mov    %esp,%ebp
   0x080483f2 <+3>:	mov    0x8(%ebp),%edx
   0x080483f5 <+6>:	mov    %edx,%eax
   0x080483f7 <+8>:	add    %eax,%eax
   0x080483f9 <+10>:	add    %edx,%eax
   0x080483fb <+12>:	shl    $0x2,%eax
   0x080483fe <+15>:	add    %edx,%eax
   0x08048400 <+17>:	pop    %ebp
   0x08048401 <+18>:	ret  
*/
