/*
tag:
devide
*/

#answer1.0 by april
#include <math.h>
long odd_count(long n) {
  return ceil(n/2);
}


#answer2.0
long odd_count(long n) {
  return n / 2;
}

#answer3.0
long odd_count(long n) {
  return n>>1;
}


#answer4.0
long odd_count(long n) {
  int m = floor(n / 2);
  return m;
}
