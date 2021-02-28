#include <stdio.h>
#include <limits.h>

int main(void) 
{
	unsigned int number1 = UINT_MAX + 1;
	int number2 = UINT_MAX;
	int add = number1 + number2;
	(add > 0) ? printf("Summation is positive") : printf("Summation is negative");
	return 0;
}
