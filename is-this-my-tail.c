/*
tag:
bool, array, strcmp, 
*/

#answer1.0 by april
int correct_tail(const char *body, const char *tail) {
  int len = strlen(body);
  char last = body[len-1];
  if (last == *tail )  
    return 1;
  else 
    return 0;
}


#answer2.0
int correct_tail(const char *body, const char tail[1]) {
  return body[strlen(body) - 1] == *tail;
}


#answer3.0
int correct_tail(const char *body, const char *tail) {
  
  int i = 0;
  while (body[i]!='\0') {
    i++;
  }
  return body[i-1] == *tail ? 1 : 0;
}


#answer3.1 by april
int correct_tail(const char *body, const char *tail) {
  while (*body != '\0') {
    body++;
  }    
  return *(--body) == *tail ? 1:0;
}


#answer4.0
#include <string.h>

int correct_tail(const char *body, const char *tail) {

if (strcmp(tail, &body[strlen(body) - 1]) == 0)
    return 1;
else
  return 0;
}
//  int strcmp(const char *str1, const char *str2) 把 str1 所指向的字符串和 str2 所指向的字符串进行比较

