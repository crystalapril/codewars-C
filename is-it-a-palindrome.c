'''
tag:
reverse, strlen, tolower
'''

#answer1.0 by april
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool is_palindrome(const char *str_in) {
  int len = strlen(str_in);
  for (int i=0;i<len;i++) {
    if ( tolower(str_in[i]) != tolower(str_in[len-i-1]) )
      return 0;
  }
  return 1;
}


#answer2.0
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool is_palindrome (const char *s) {
  size_t len = strlen(s);
  for (size_t i = 0; i < len / 2; i += 1) {
    if (tolower(s[i]) != tolower(s[len - i - 1])) {
      return false;
    }
  }
  return true;
}


#answer3.0
#include <string.h>

bool is_palindrome(const char *str_in) {
  int len = strlen(str_in);
  char *p = str_in;
  char *q = str_in;
  for (int i=0;i<len;i++) {    
    if (tolower(p[i]) != tolower(q[len-i-1])) {
      return 0;}   
  }
  return 1;
}



#answer4.0
bool is_palindrome(const char *str_in) {
  for(int i=0,j=strlen(str_in)-1; i<j; i++,j--)
    if(tolower(str_in[i]) != tolower(str_in[j]))
      return false;
  
  return true;
}


#answer5.0
int is_palindrome(char *s)
{
  for (char *q = s + strlen(s) - 1; *s && tolower(*s++) == tolower(*q--););
  return !*s;
}


