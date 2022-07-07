/*
tag:
math.h, pow
*/

#answer1.0 by april
#include <inttypes.h>
#include <stddef.h>
#include <math.h>

void powers_of_two (size_t n, uint64_t powers[n + 1])
{
  for (unsigned long i =0;i<=n ;i++) {
    powers[i] = pow(2.0,i);    
  }
}


#answer2.0
void powers_of_two (size_t n, uint64_t powers[n + 1])
{
  for (size_t i = 0; i <= n; i++) {
    powers[i] = (uint64_t)1 << i;
  }
}
//  << 左移运算， 左移n位相当于该数乘以 2的n次方


#answer3.0
#include <inttypes.h>
#include <stddef.h>

void powers_of_two (size_t n, uint64_t powers[])
{
    for (*powers = 1; n; --n)
        powers[n] = (uint64_t)1 << n;
}

