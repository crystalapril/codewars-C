/*
tag:
calloc, array ,strdup ,toupper 
*/

#answer1.0 by april
#include <ctype.h>
#include <string.h>

char *capitalize_word (char *word)
{
  int len = strlen(word);
  char *p = calloc(len+2,1) ;
  for (int i=0;i<len;i++) {
    if (i ==0 && word[0] >= 'a' && word[0] <= 'z')
      p[0] = word[0]- 32;
    else
      p[i] = word[i];
  }
  return p;
}

#answer2.0
char *capitalize_word (const char *word)
{
  char *capitalized = strdup(word);
  capitalized[0] = toupper(word[0]);
  return capitalized;
}
//  strdup() function returns a pointer to a new string which is a duplicate of the string s.
//  toupper() function converts a lowercase alphabet to an uppercase alphabet.

