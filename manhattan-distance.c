'''
tag:
array
'''
  
#answer1.0 by april
int manhattan_distance(int *a, int *b) {
  int d=0;  
  d= abs(a[0]-b[0]) + abs(a[1]-b[1]);
  return d;  
}

#answer2.0 
manhattan_distance(*a,*b)
{
 return abs(*a++-*b++)+abs(*a-*b);
}

#answer3.0 
int manhattan_distance(int *a, int *b) {

   return abs(*a - *b) + abs(*(1 + a) - *(1 + b));
}

#answer4.0 
int manhattan_distance(int *a, int *b) {
  return fabs(a[0] - b[0]) + fabs(a[1] - b[1]);
}

