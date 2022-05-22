'''
tag:
else if, pointer, struct, function
'''
  
#answer1.0 by april
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
//    printf("temp= %d,count= %d\n",temp,count);
    fac *= 10;
  }
  char *p = calloc(count+3,sizeof(char));
  int i,e;
  number = ifPositive(number,&i,&e,p);

  for (; i< count + e; i++){
    int r = number / fac;
//    printf("fac=%d ,r=%d\n",fac,r);
    p[i] = r+ '0';
    number = number % fac;
    fac /= 10;
//    printf("i = %d,p[i] = %c, number = %d\n",i,p[i],number);
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


#answer2.0 

