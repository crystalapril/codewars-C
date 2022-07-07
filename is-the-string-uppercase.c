/*
tag:
islower
*/

#answer1.0 by april
bool is_uppercase(const char *source){
  for (int i=0; source[i] !='\0';i++) {
    if (islower(source[i]))
      return 0;  
  }
  return 1;
};


#answer2.0
bool is_uppercase(const char *source){
    while (*source){
        if (islower(*source)){
            return false;
        }
        source++;
    }
    return true;
}


#answer3.0
bool is_uppercase(const char *src)
{
    char c;
    while (c = *src++)
        if (c >= 'a' && c <= 'z')
            return false;
    return true;
}

#answer4.0
int is_uppercase(const char *s) {
  char *p = s;
  for ( ; *p; p++ ) if ( *p>='a' && *p<='z' ) return 0;
  return 1;
}
