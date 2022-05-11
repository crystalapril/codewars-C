'''
tag:
reverse string
'''

#answer1.0 by april
#include <stdlib.h>
#include <string.h>

char *strrev (char *string)
{ 
  int len= strlen(string);
  char *p = (char*)malloc(sizeof(char)*len);
  for(int i=0;i<len;i++){
    p[i] = string[i];
  }
    
  for (int i=0;i<len;i++) {
    string[i] = p[len -i-1];
  }
  free(p);  
  return string; // reverse the string in place and return it
}


#answer2.0
char *strrev (char *string)
{
  int i;
  char *str = string;
  for(i = 0; i < (int)strlen(str)/2; i++){
    char c = str[i];
    str[i] = str[strlen(str) - i - 1];
    str[strlen(str) - i - 1] = c;
  }
  return str; // reverse the string in place and return it
}


#answer3.0
char *strrev(char *string)
{
  for (char *p1 = string, *p2 = string + strlen(string) - 1; p2 > p1; ++p1, --p2)
  {
    *p1 ^= *p2;
    *p2 ^= *p1;
    *p1 ^= *p2;
  }
  return string;
}


#answer4.0
char *strrev(char *string)
{
  for (char tmp, *p = string, *q = p + strlen(p) - 1; p < q; p++, q--)
  {
    tmp = *p, *p = *q, *q = tmp;
  }
  
  return string;
}


#answer4.1
char *strrev (char *string)
{
    char *l = string, *r = &string[strlen(string) - 1], temp;
    while (l <= r)
    {
        temp = *l;
        *l++ = *r;
        *r-- = temp;
    }
    return string;
}


