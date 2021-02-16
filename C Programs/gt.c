#include <limits.h>

int max(int x, int y)
{
  return x > y;
}

int main()
{
   int i = max(INT_MAX, 2);
   int j = max(0, 3);

   return 0;
}
