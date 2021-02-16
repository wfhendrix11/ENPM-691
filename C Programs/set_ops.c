#include <stdio.h>
#include <limits.h>

typedef unsigned int bitvector;

bitvector intersect(bitvector a, bitvector b)
{
   return a & b;
}

bitvector unionn(bitvector a, bitvector b)
{
   return a | b;
}

bitvector setBit(bitvector a, unsigned int pos)
{
  return a |= (1 << pos);
}

void printSetBitPos(bitvector a)
{
  unsigned int pos = 0;

  for(pos = 0; pos < sizeof(bitvector) * CHAR_BIT; pos++)
  {
      if(a & (1 << pos))
          printf("%d\n", pos);
  }
}


int main()
{
  bitvector a = 0;
  bitvector b = 0;
  bitvector c = 0;
  
  // Set 1: {0, 1, 2, 3, 5}
  a = setBit(a, 0);
  a = setBit(a, 1);
  a = setBit(a, 2);
  a = setBit(a, 3);
  a = setBit(a, 5);

  // Set 2: {0, 1, 4, 5}
  b = setBit(b, 0);
  b = setBit(b, 1);
  b = setBit(b, 4);
  b = setBit(b, 5);

  
  c = intersect(a, b);
  printSetBitPos(c);

  return 0;
}
