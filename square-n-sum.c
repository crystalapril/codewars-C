/*
tag:
array
*/


#answer1.0 by april
int square_sum(const int *values, size_t count){
  int sum=0;
  for (int i =0; i<count;i++) {
    sum += values[i] * values[i];
  }
  return sum;
};


#answer2.0
#include <stddef.h>
#include <math.h>
int square_sum(const int *values, size_t count)
{
  int result = 0;
  for(int i= 0;i< count;i++)
  {
    result += pow(*(values+i),2);
  }
  return result;
}


#answer3.0
int square_sum(const int *values, size_t count){
    int res = 0;
    while(count--) 
      res += (*values)*(*values++);
    return res;
}


#answer4.0
int square_sum(const int *values, size_t count)
{
    int sum = 0;
    int num;
    while (count--) {
        num = *(values+count);
        sum += num * num;
    }
    return sum;
}



