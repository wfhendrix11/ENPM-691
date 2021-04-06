#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) 
{
	char buffer[18];
	
	strcpy(buffer, argv[1]);
	
	return 1;
	
}

/*
   0x0804840b <+0>:	push   %ebp
   0x0804840c <+1>:	mov    %esp,%ebp
   0x0804840e <+3>:	sub    $0x14,%esp
   0x08048411 <+6>:	mov    0xc(%ebp),%eax
   0x08048414 <+9>:	add    $0x4,%eax
   0x08048417 <+12>:	mov    (%eax),%eax
   0x08048419 <+14>:	push   %eax
   0x0804841a <+15>:	lea    -0x12(%ebp),%eax
   0x0804841d <+18>:	push   %eax
   0x0804841e <+19>:	call   0x80482e0 <strcpy@plt>
   0x08048423 <+24>:	add    $0x8,%esp
   0x08048426 <+27>:	mov    $0x1,%eax
   0x0804842b <+32>:	leave  
   0x0804842c <+33>:	ret   
*/
