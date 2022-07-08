/*
tag:
ceil, floor, sqrt, abs
*/

#answer1.0 by april
#include <math.h>
#include <stdlib.h>
int nearest_sq(int n)
{
  double sq = sqrt(n);
  int c = pow(ceil(sq),2);
  int f = pow(floor(sq),2);
  if ( abs(c - n) <= abs(f-n) )
    return c;
  else
    return f;
}


#answer2.0
int nearest_sq(int n)
{
  return pow(round(sqrt(n)), 2);
}


#answer3.0
int nearest_sq(int n) {
    int sq = (int) sqrt(n);
    int m = sq * sq;
    int k = (sq + 1) * (sq + 1);
    return (n - m < k - n) ? m : k;
}
