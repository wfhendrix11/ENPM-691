#include <stdio.h>
#include <limits.h>

int main() 
{
	char A = 0x71;
	char X = 0xF9;
	char Y = 0xBB;
	char Z = 0xA;

	char answer = A & ((X ^ Y) | Z);

}
