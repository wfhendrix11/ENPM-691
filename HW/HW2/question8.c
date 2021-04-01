#include <stdio.h>

int main() 
{
	sum(1, 2);
	return 0;
	
}

int sum(int x, int y) {
	int t = x + y;
	return t;
} 


/*
   0x080483f1 <+0>:	push   %ebp
   0x080483f2 <+1>:	mov    %esp,%ebp
   0x080483f4 <+3>:	sub    $0x4,%esp
   0x080483f7 <+6>:	mov    0x8(%ebp),%edx
   0x080483fa <+9>:	mov    0xc(%ebp),%eax
   0x080483fd <+12>:	add    %edx,%eax
   0x080483ff <+14>:	mov    %eax,-0x4(%ebp)
   0x08048402 <+17>:	mov    -0x4(%ebp),%eax
   0x08048405 <+20>:	leave  
   0x08048406 <+21>:	ret 
*/
