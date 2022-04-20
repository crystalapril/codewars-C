'''
tag:
round, sqrt
'''

#answer1.0 by april
#include <math.h>
float heron(int a, int b, int c) {
  float s = (a + b + c) / 2.0;
  float r = 0.0;
  r = sqrt(s * (s-a) * (s-b) * (s-c));
  return round(r*100)/100.0;
}

#answer2.0
float heron(int a, int b, int c) {
  float s = (a+b+c)/2.;
  return sqrt((s * (s - a) * (s - b) * (s - c)));
}

