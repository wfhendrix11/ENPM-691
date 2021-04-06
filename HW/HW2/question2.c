#include <stdio.h>

int main() 
{
	encode(1, 2, 3, 4);
	return 0;
	
}

int encode(int a, int b, int c, int d) {
	int x = b + c;
	int y = a - d;
	int z = x >> 31;

	return z ^ y;
}


// x ^ z

/*
   0x080483fb <+6>:	mov    0xc(%ebp),%edx
   0x080483fe <+9>:	mov    0x10(%ebp),%eax
   0x08048401 <+12>:	add    %edx,%eax
   0x08048403 <+14>:	mov    %eax,-0x4(%ebp)
   0x08048406 <+17>:	mov    0x8(%ebp),%eax
   0x08048409 <+20>:	sub    0x14(%ebp),%eax
   0x0804840c <+23>:	mov    %eax,-0x8(%ebp)
   0x0804840f <+26>:	mov    -0x4(%ebp),%eax
   0x08048412 <+29>:	sar    $0x1f,%eax
   0x08048415 <+32>:	mov    %eax,-0xc(%ebp)
   0x08048418 <+35>:	mov    -0x4(%ebp),%eax
   0x0804841b <+38>:	xor    -0xc(%ebp),%eax 

// z ^ y

/*
   0x080483fb <+6>:	mov    0xc(%ebp),%edx
   0x080483fe <+9>:	mov    0x10(%ebp),%eax
   0x08048401 <+12>:	add    %edx,%eax
   0x08048403 <+14>:	mov    %eax,-0x4(%ebp)
   0x08048406 <+17>:	mov    0x8(%ebp),%eax
   0x08048409 <+20>:	sub    0x14(%ebp),%eax
   0x0804840c <+23>:	mov    %eax,-0x8(%ebp)
   0x0804840f <+26>:	mov    -0x4(%ebp),%eax
   0x08048412 <+29>:	sar    $0x1f,%eax
   0x08048415 <+32>:	mov    %eax,-0xc(%ebp)
   0x08048418 <+35>:	mov    -0xc(%ebp),%eax
   0x0804841b <+38>:	xor    -0x8(%ebp),%eax    
*/


