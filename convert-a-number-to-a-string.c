'''
tag:
else if, pointer, struct, function
'''
  
#answer1.0 by april : pointer
#include <stdlib.h>
#include <stdio.h>

int ifPositive(int number,int *i, int *e, char p[]) {
    if (number < 0) {
        *i = 1;
        *e = 2;
        number = - number;
        p[0] = '-';
        return number;
    } else if (number >= 0) {
        *i = 0;
        *e = 1;
        return number;
    }
}

char *number_to_string(int number) {
  int count = 0;
  int temp = abs(number);
  int fac = 1;
  while (temp > 9 ) {
    temp /= 10;
    count++;
    fac *= 10;
  }
  char *p = calloc(count+3,sizeof(char));
  int i,e;
  number = ifPositive(number,&i,&e,p);

  for (; i< count + e; i++){
    int r = number / fac;
    p[i] = r+ '0';
    number = number % fac;
    fac /= 10;
  }
  p[count + e] = '\0';
  printf("p = %s\n",p);
  return p;
}


void test(int n, char const *expected ) {
    char *p = number_to_string(n);
    printf("%s\n",p);
    if (*p == *expected)
        printf("right\n");
    else
        printf("the answer is wrong\n");
    free(p);
}

int main(void) {
    test(1,"1");
    test(0,"0");
    test(100,"100");
    test(123,"123");
    test(-123,"-123");
    test(-2147483647, "-2147483647");
}


#answer2.0 by april : struct
struct sign {
    int i;
    int e;
    int n;
};

struct sign ifPositive(int number,char p[]) {
    struct sign s;
    if (number < 0) {
        s.i = 1;
        s.e = 2;
        s.n = - number;
        p[0] = '-';
        return s;
    } else if (number >= 0) {
        s.i = 0;
        s.e = 1;
        s.n = number;
        return s;
    }
}

char *number_to_string(int number) {
  int count = 0;
  int temp = abs(number);
  int fac = 1;
  while (temp > 9 ) {
    temp /= 10;
    count++;
    fac *= 10;
  }
  char *p = calloc(count+3,sizeof(char));
  struct sign s = ifPositive(number,p);
  for (; s.i< count + s.e; s.i++){
    int r = s.n / fac;
    p[s.i] = r + '0';
    s.n = s.n % fac;
    fac /= 10;
  }
  p[count + s.e] = '\0';

  return p;
}

