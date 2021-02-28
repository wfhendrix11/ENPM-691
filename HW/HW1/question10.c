#include <stdio.h>
#include <limits.h>

int main() 
{
	short s = 1;
	char c = 2;
	int *i = &c;

	short s_add = &s + 1;
	
	int i_add = &*i + 1;
}
