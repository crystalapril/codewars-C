'''
tag:
array, for
'''
  
#answer1.0 by april
#include <stddef.h>

int positive_sum(const int *values, size_t count) {
  int i;
  int sum=0;
  for (i=0;i<count;i++) {
    if (values[i]>0) {
      sum += values[i];      
    }  
  }  
  return sum;    
};            // 注意：这里的分号是不必要的


#answer2.0
int positive_sum(const int *val, size_t count) {
  int sum = 0;
  for(int i = 0; i < count; i++)
    if(val[i] > 0) sum += val[i];
  return sum;
}


#answer3.0
int positive_sum(const int *values, size_t count){
  int i, sum = 0;
  for (i = 0; i < count; i++){
    if(values[i] > 0)
      sum += values[i];
  }
  return sum;
}


#answer4.0
int positive_sum(const int *val, size_t len) {
    int res = 0;
    while (len --> 0) res += val[len] > 0 ? val[len] : 0;

    return res;
}
