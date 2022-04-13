'''
tag:
%, &&
  
'''
  
#answer1.0 by april
bool isDivisible(int n, int x, int y) {
    return (n % x ==0) && (n % y==0);
}
  
#answer2.0
bool isDivisible(int n, int x, int y) {
  return n % x == 0 && n % y == 0;
}  
  
#answer3.0
bool isDivisible(int n, int x, int y) {
  return n%x == 0 && n%y == 0 ? 1 : 0;
}

#answer3.1
bool isDivisible(int n, int x, int y) {
    return ((n % x == 0) && (n % y == 0)) ? true : false;
}

#answer4.0
bool isDivisible(int n, int x, int y)
{
    return !(n % x || n % y);   // || 逻辑操作符 或
}

