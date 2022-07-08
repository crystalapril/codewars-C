/*
tag:
bool
*/

#answer1.0 by april
bool zero_fuel(double distance_to_pump, double mpg, double fuel_left)
{
  if (distance_to_pump > mpg*fuel_left)
    return false;
  else
    return true;
}


#answer2.0 
#include <stdbool.h>

bool zero_fuel(double distance_to_pump, double mpg, double fuel_left)
{
 return distance_to_pump <= mpg * fuel_left;
}


#answer3.0
#include <stdbool.h>

bool zero_fuel(double dist, double mpg, double fuel)
{
    return dist > mpg * fuel ? false : true;
}
