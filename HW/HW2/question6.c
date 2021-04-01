#include <stdio.h>

int main() 
{
	get();
	
}

void get(void) {
	char temp[122];
	gets(temp);
	puts(temp);
} 

// 120

/* 
   0x0804844a <+0>:	push   %ebp
   0x0804844b <+1>:	mov    %esp,%ebp
   0x0804844d <+3>:	sub    $0x78,%esp
   0x08048450 <+6>:	lea    -0x78(%ebp),%eax
   0x08048453 <+9>:	push   %eax
   0x08048454 <+10>:	call   0x8048300 <gets@plt>
   0x08048459 <+15>:	add    $0x4,%esp
   0x0804845c <+18>:	lea    -0x78(%ebp),%eax
   0x0804845f <+21>:	push   %eax
   0x08048460 <+22>:	call   0x8048310 <puts@plt>
   0x08048465 <+27>:	add    $0x4,%esp
   0x08048468 <+30>:	nop
   0x08048469 <+31>:	leave  
   0x0804846a <+32>:	ret  
*/

// 116

/*
   0x0804844a <+0>:	push   %ebp
   0x0804844b <+1>:	mov    %esp,%ebp
   0x0804844d <+3>:	sub    $0x74,%esp
   0x08048450 <+6>:	lea    -0x74(%ebp),%eax
   0x08048453 <+9>:	push   %eax
   0x08048454 <+10>:	call   0x8048300 <gets@plt>
   0x08048459 <+15>:	add    $0x4,%esp
   0x0804845c <+18>:	lea    -0x74(%ebp),%eax
   0x0804845f <+21>:	push   %eax
   0x08048460 <+22>:	call   0x8048310 <puts@plt>
   0x08048465 <+27>:	add    $0x4,%esp
   0x08048468 <+30>:	nop
   0x08048469 <+31>:	leave  
   0x0804846a <+32>:	ret 
*/

// 118

/*
   0x0804844a <+0>:	push   %ebp
   0x0804844b <+1>:	mov    %esp,%ebp
   0x0804844d <+3>:	sub    $0x78,%esp
   0x08048450 <+6>:	lea    -0x76(%ebp),%eax
   0x08048453 <+9>:	push   %eax
   0x08048454 <+10>:	call   0x8048300 <gets@plt>
   0x08048459 <+15>:	add    $0x4,%esp
   0x0804845c <+18>:	lea    -0x76(%ebp),%eax
   0x0804845f <+21>:	push   %eax
   0x08048460 <+22>:	call   0x8048310 <puts@plt>
   0x08048465 <+27>:	add    $0x4,%esp
   0x08048468 <+30>:	nop
   0x08048469 <+31>:	leave  
   0x0804846a <+32>:	ret 
*/

// 122

/*
   0x0804844a <+0>:	push   %ebp
   0x0804844b <+1>:	mov    %esp,%ebp
   0x0804844d <+3>:	sub    $0x7c,%esp
   0x08048450 <+6>:	lea    -0x7a(%ebp),%eax
   0x08048453 <+9>:	push   %eax
   0x08048454 <+10>:	call   0x8048300 <gets@plt>
   0x08048459 <+15>:	add    $0x4,%esp
   0x0804845c <+18>:	lea    -0x7a(%ebp),%eax
   0x0804845f <+21>:	push   %eax
   0x08048460 <+22>:	call   0x8048310 <puts@plt>
   0x08048465 <+27>:	add    $0x4,%esp
   0x08048468 <+30>:	nop
   0x08048469 <+31>:	leave  
   0x0804846a <+32>:	ret 
*/
