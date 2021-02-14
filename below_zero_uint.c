#include<limits.h>
#include<stdio.h>

int main()
{
   unsigned int ui = 0;

   ui--;

   printf("Unsigned max:%u\n", UINT_MAX); 
   printf("ui: %u\n", ui);

   return 0;
}

