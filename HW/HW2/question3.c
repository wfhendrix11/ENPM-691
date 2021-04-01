#include <stdio.h>

int main() 
{
	forloop(1, 2);
	return 0;
	
}

int forloop(int x, int y) {
	int i;
	for (i=x-1; i>=0 && i!=y; i-2) {
		// no code
	}
} 

// B = i>=0 && i==y

/*
   0x080483f1 <+0>:	push   %ebp
   0x080483f2 <+1>:	mov    %esp,%ebp
   0x080483f4 <+3>:	sub    $0x4,%esp

   0x080483f7 <+6>:	mov    0x8(%ebp),%eax
   0x080483fa <+9>:	sub    $0x1,%eax
   0x080483fd <+12>:	mov    %eax,-0x4(%ebp)
   0x08048400 <+15>:	cmpl   $0x0,-0x4(%ebp)
   0x08048404 <+19>:	js     0x804840e <forloop+29>
   0x08048406 <+21>:	mov    -0x4(%ebp),%eax
   0x08048409 <+24>:	cmp    0xc(%ebp),%eax
   0x0804840c <+27>:	je     0x8048400 <forloop+15>
   0x0804840e <+29>:	nop
   0x0804840f <+30>:	leave  
   0x08048410 <+31>:	ret 
*/

// B = i>=0 && i!=y

/*
   0x080483f1 <+0>:	push   %ebp
   0x080483f2 <+1>:	mov    %esp,%ebp
   0x080483f4 <+3>:	sub    $0x4,%esp

   0x080483f7 <+6>:	mov    0x8(%ebp),%eax
   0x080483fa <+9>:	sub    $0x1,%eax
   0x080483fd <+12>:	mov    %eax,-0x4(%ebp)
   0x08048400 <+15>:	cmpl   $0x0,-0x4(%ebp)
   0x08048404 <+19>:	js     0x804840e <forloop+29>
   0x08048406 <+21>:	mov    -0x4(%ebp),%eax
   0x08048409 <+24>:	cmp    0xc(%ebp),%eax
   0x0804840c <+27>:	jne    0x8048400 <forloop+15>
   0x0804840e <+29>:	nop
   0x0804840f <+30>:	leave  
   0x08048410 <+31>:	ret 
*/
