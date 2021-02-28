#include<stdio.h>

void swap(int *x, int *y)
{
 	int temp0 = *x;
	int temp1 = *y;
	*x = temp1;
	*y = temp1;
}

int main()
{
	int a = 10;
	int b = 15;
	swap(&a, &b);
}
