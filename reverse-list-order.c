/*
tag:
array, reverse
*/

#answer1.0 by april
int *reverse_list(const int *array, size_t length) {
  int *a = calloc(length + 1,sizeof(int));
  for (int i=0;i< length;i++)
    a[i] = array[length-1-i];
  a[length ] = '/0';
  return a;
}

#answer2.0
int *reverse_list(const int *array, size_t length) {
  
    int * newArray = malloc(length * sizeof(int));  
    int i;
    for (i = 0; i < length; i++)
      newArray[i] = array[length - 1 - i];      
    return newArray;
}


#answer3.0
#include <stdlib.h>
#include <stddef.h>

int *reverse_list(const int *array, size_t length) {
    int *newlist = malloc(length * sizeof (int));
    int *back = newlist + length-1;
    while (length--)
      *back-- = *array++;
    return newlist;
}

#answer4.0
#include <stdlib.h>
int *reverse_list(const int *array, size_t length) {
  int *ptr = (int*) calloc(length,sizeof(int));
  for(int i=0,j=length;i<length;) ptr[i++]=array[--j];
  return ptr;
}

