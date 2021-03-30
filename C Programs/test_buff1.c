/* This program is used for demonstrating how to corrupt the return address */

#include <stdio.h>

void Test()
{

}

int main()
{
  Test();
  return 0;
}
