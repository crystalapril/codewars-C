'''
tag:
round
'''
  
#answer1.0 by april
extern const double PI;

float square_area(double arc) {
  double r;
  r = 2*arc/PI;
  return round(r*r*100)/100;
}


#answer2.0
#include <math.h>

extern const double PI;

float square_area(double arc) {
  return round(pow(arc * 2 / PI, 2) * 100) / 100;
}


#answer3.0
extern const double PI;

float square_area(double arc) {
  double R = (arc*4.) / (2.* PI);
  return (double)((int)(R*R*100.+0.5)) /100.;
}

