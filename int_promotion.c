#include<stdio.h>

int main()
{
  signed char c1 = 100;
  signed char c2 = 3;
  signed char c3 = 4;
  signed char cresult;

  cresult  = c1*c2/c3;

  printf("Result:%c %d\n", cresult, cresult);
  return 0; 
}
