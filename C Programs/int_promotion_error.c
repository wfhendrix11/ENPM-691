#include <stdio.h>
#include <limits.h>

int main()
{
  unsigned long int lng = ULONG_MAX;
  char c = -1;

  if (c == lng)
  {
    printf("Why is -1 = 4, 294, 967,295???\n");
  }

  return 0;
}
