#include <stdio.h>
#include <limits.h>

int main() 
{
	short x = 0x01234567;
	short y = *(short *)&x;

}
