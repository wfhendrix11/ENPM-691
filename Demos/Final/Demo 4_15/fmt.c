#include<stdio.h>

int main(int argc, char** argv) 
{
	char buffer[256];
	strcpy(buffer, argv[1]);
	printf(buffer);
	return 0;
}

// run $(python -c 'print("A"*50 + "-%x"*10)')

