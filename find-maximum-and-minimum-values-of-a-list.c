'''
tag:
for, if else, max, min
'''
  
#answer1.0 by april
int min(int* array, int arrayLength)
{
  int min_number=array[0];
  for (int i=1;i<arrayLength;i++){
    if (array[i] < min_number) {
      min_number = array[i]; 
    }         
  }
  return min_number;
}

int max(int* array, int arrayLength)
{
  int max_number=array[0];
  for (int i=1;i<arrayLength;i++) {
    if (array[i] > max_number){
      max_number = array[i];
    }      
  }
  return max_number;
}


#answer2.0
#include <limits.h>
int min(int* a, int l) {
  int mn = INT_MAX;
  for (int i = 0; i < l; ++i)
    if (a[i] < mn) mn = a[i];
  return mn;
}

int max(int* a, int l) {
  int mx = INT_MIN;
  for (int i = 0; i < l; ++i)
    if (a[i] > mx) mx = a[i];
  return mx;
}


#answer3.0
int min(const int *arr, int len)
{
    int min = *arr;
    while (--len)
        if (min > *(arr+len))
            min = *(arr+len);
    return min;
}

int max(const int *arr, int len)
{
    int max = *arr;
    while (--len)
        if (max < *(arr+len))
            max = *(arr+len);
    return max;
}


#answer4.0
int min(int* array, int arrayLength)
{
  int min = *array;
  while (arrayLength--) { int n = *array++; if (n < min) min = n; }
  return min;
}

int max(int* array, int arrayLength)
{
  int max = *array;
  while (arrayLength--) { int n = *array++; if (n > max) max = n; }
  return max;
}
