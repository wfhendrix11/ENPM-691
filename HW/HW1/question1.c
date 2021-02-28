#include <stdio.h>

int main() 
{
	int x = sizeof(short*);
	int y = (*(&x))++;
	printf("End");
}

