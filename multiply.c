'''
tag:
function
'''

#answer1.0 by april
int multiply(int a, int b) {
  return a*b;
}


#answer2.0
int multiply(int a, char *b) {
  //get the address of b and dereference to get the value
  //assign it to an signed int to work with negative numbers
  int _b = &*b;
  return a * _b;
}
