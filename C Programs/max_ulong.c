#include<limits.h>
#include<stdio.h>

int main()
{
   unsigned long int ui = ULONG_MAX;

   printf("MAX: %lu\n", ui);
   printf("MAX+1: %lu\n", ui+1);
   printf("MAX+2: %lu\n", ui+2);

   ui = 0;
   printf("0-1: %lu\n", ui-1);

   return 0;
}

