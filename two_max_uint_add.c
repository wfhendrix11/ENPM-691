#include<limits.h>
#include<stdio.h>

int main()
{
   unsigned int x = UINT_MAX;
   int i = 1;

   for(; i <= UINT_MAX; i++)
     printf("x=%u y=%u x+y=%u\n", x, i, x+i);

   return 0;
}

