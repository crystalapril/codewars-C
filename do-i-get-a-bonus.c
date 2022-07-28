/*
tag:
snprintf, asprintf,
*/

#answer1.0 by april
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h> 

typedef unsigned long long ull;

char *bonus_time(ull salary, bool bonus) {
  if (bonus) 
    salary = salary*10;
  int len = snprintf( NULL, 0, "%lu", salary );
  char* s = malloc( len + 1 );
  snprintf( s, len + 1, "%lu", salary );  
  char *p = calloc(len+2,sizeof(char));
  p[0] = '$';
  for (int i=1;i<len+1;i++) {
    p[i] = s[i-1];
  }
  free(s);
  return p;
}
//  int snprintf(char *str, size_t size, const char *format, ...)
// 设将可变参数(...)按照 format 格式化成字符串，并将字符串复制到 str 中，size 为要写入的字符的最大数目，超过 size 会被截断

#answer2.0
#include <stdbool.h>
#include<stdio.h>
#include <stdlib.h>

typedef unsigned long long ull;

char *bonus_time(ull salary, bool bonus) {
    char *result;    
    if (bonus)
    salary*=10;
    
    asprintf(&result,"$%llu",salary);    
    return result;
}
// int asprintf(char **strp, const char *fmt, ...);
// asprintf()可以说是一个增强版的sprintf(),在不确定字符串的长度时，能够根据格式化的字符串长度，申请足够的内存空间
// 使用完后，必须通过free()释放空间


#answer3.0
typedef unsigned long long ull;

char *bonus_time(ull salary, bool bonus) {
  char *buf;
  asprintf(&buf, "$%llu", bonus ? 10 * salary : salary);
  return buf;
}


#answer4.0
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
typedef unsigned long long ull;

char *bonus_time(ull salary, bool bonus) {

  if(bonus== true){
    salary = salary*10;
    }
  char* str = (char *) malloc(20);
  str[0]='$';
  int n = sprintf(&str[1], "%llu", salary);
  return str;  
}

