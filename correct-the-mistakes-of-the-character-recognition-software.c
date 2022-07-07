/*
tag:
str
*/

#answer1.0 by april
#include <string.h>
char *correct(char *string) {
  int len = strlen(string);
  for (int i=0;i<len;i++) {
    if (string[i] == '5')
      string[i] = 'S';
    else if (string[i] == '0')
      string[i] = 'O';
    else if (string[i] == '1')
      string[i] = 'I';
  }
  return string;
};


#answer2.0
char *correct(char *string){
    char* p = string;
    while(*p){
        switch(*p){
        case '5':
            *p = 'S';
            break;
        case '0':
            *p = 'O';
            break;
        case '1':
            *p = 'I';
            break;
        default:
            ;
        }
        ++p;
    }
    return string;
}


#answer3.0
char *correct(char *string){
  for(int i=0; i<=strlen(string); i++){
    switch(string[i]){
      case '5': string[i] = 'S'; break;
      case '0': string[i] = 'O'; break;
      case '1': string[i] = 'I'; break;
    }
  }
  return string;
}


#answer4.0
char *correct(char *a)
{
  for(int i=0;a[i]!='\0';i++)
  {
    if(a[i]=='1')
    a[i]='I';
    else if(a[i]=='0')
    a[i]='O';
    else if(a[i]=='5')
    a[i]='S';
  }
  return a;
}
