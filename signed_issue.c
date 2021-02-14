#include <stdio.h>
#include <limits.h>

int main()
{
   int x = -1;

   unsigned y = x;

   if(y == 1)
   {
     printf("Value of y = 1\n");
   } else {
     printf("value of y: %u\n", y);
     printf("Max UINT: %u\n", UINT_MAX);
   }

   return 0;
}
