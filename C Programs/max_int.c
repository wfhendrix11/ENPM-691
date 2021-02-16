#include<limits.h>
#include<stdio.h>

int main()
{
   int max = INT_MAX;

   printf("MAX: %d\n", max);

   max++;
   printf("MAX+1: %d\n", max);

   max++;
   printf("MAX+2: %d\n", max);

   max++;
   printf("Max+3: %d\n", max);

   return 0;
}

