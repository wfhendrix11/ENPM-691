#include <stdio.h>


// checks whether the bit pos of the given num is set or not.

int is_bit_set(unsigned int num, int bit_pos)
{
  int one = 1;

  if(num & (one << bit_pos))
    return 1;
  else
    return 0;
}


int main(void)
{
  int i = 0;
  int num = 0;
  
  printf("Enter a number:");
  scanf("%d", &num);
 
  for(i = 31; i >=0 ; i--) 
   printf("%d", is_bit_set(num, i));

  printf("\n");

  return 0; 
}
