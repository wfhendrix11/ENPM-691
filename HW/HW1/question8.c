#include <stdio.h>
#include <limits.h>

int main() 
{
	char x = 1;
	char y = 1;
	char z = -1 >> y;

	x ^= (-1 >> y);

}
