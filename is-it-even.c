'''
tag:
%, fmod(<math.h>)
'''
  
#answer1.0 by april
#include <stdbool.h>
#include <math.h>

bool is_even(double n)
{
  return (fmod(n,2) ==0 )? 1:0;
}


#answer2.0
#include <stdbool.h>

bool is_even(double n)
{
    return !fmod(n, 2);
}

#answer3.0
#include <stdbool.h>
#include <math.h>

bool is_even(double n)
{   
   return (fmod(n, 2) == 0) ;
};


#answer4.0
#include <stdbool.h>
#include <stdio.h>

bool is_even(double n)
{
    if (n != (long int) n)
      return false;
    if ((long int) n % 2 == 0)
      return true;
    return false;
}

