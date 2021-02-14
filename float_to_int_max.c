#include <limits.h>

int main()
{
  int i_max = INT_MAX;
  float f = INT_MAX;
  int i = f;
  if(i == i_max)
    return 1;
  else
    return 0;
}
