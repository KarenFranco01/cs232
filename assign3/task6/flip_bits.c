#include <stdio.h>
#include <stdlib.h>

// Note, the bits are counted from right to left. 
// Flip the bits of x within range [start, end], in which both are inclusive.
// Assume 0 <= start & end <= 31
void flip_bits(unsigned * x,
              unsigned start,
              unsigned end) {
  for (int i=0; i<32; i++)
    {
      *(x+i) = (*(x+i) & *(x+i));
    }
    // YOUR CODE HERE
}
