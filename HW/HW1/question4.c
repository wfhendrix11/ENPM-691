#include <stdio.h>
#include <limits.h>

int main() 
{
	short x = SHRT_MAX;
	short y = SHRT_MIN;
	int magic = x > (unsigned short) y ? 0:1;
}
