/*
tag:
bool
*/

#answer1.0 by april
#include <stdbool.h>

bool lovefunc(int flower1, int flower2) {
  return (flower1 + flower2) % 2 !=0 ;
}


#answer2.0
#include <stdbool.h>

bool lovefunc(int flower1, int flower2) {
  return flower1 % 2 != flower2 % 2;
}


#answer3.0
#include <stdbool.h>

bool lovefunc(int flower1, int flower2) {
  return (flower1 + flower2) % 2;
}
