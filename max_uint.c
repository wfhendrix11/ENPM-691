#include<limits.h>
#include<stdio.h>

int main()
{
   unsigned int ui = UINT_MAX;

   printf("MAX: %u\n", ui);
   printf("MAX+1: %u\n", ui+1);
   printf("MAX+2: %u\n", ui+2);

   ui = 0;
   printf("0-1: %u\n", ui-1);

   return 0;
}

