#include<stdio.h>
#include<string.h>

void getdata(char* str) 
{
	//int a = 10;
	//int b = 20;
	//short c = 30;
	char buffer[100];
	strcpy(buffer, str);
	puts(buffer);
}

int main(int argc, char** argv) 
{
	getdata(argv[1]);
	return 0;
}
