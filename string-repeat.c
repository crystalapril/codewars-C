/* 
tag:
malloc, pointer, array, loop , strcpy, strcat, strncat, memcpy
*/

#answer1.0 by april
char *repeat_str(size_t count, const char *src) {
  unsigned long len = strlen(src);
//   char *p = calloc( count * len + 2,1);
  char *p = malloc(count * len + 2);
  for (unsigned long i=0;i < count; i++) {    
    for (unsigned long j=0; j < len; j++) {
      p[ i*len + j] = src[j];      
    }      
  }
  p[count * len] = '\0';
  return p;
}


#answer2.0 
char *repeat_str(size_t count, const char *src) {
  int length = strlen(src);
  char* dest = malloc(count * length * sizeof(char));
  for (int i = 0; i < count; i++) {
    strcpy(dest + i * length, src);
  }
  return dest;
}
// char *strcpy(char *dest, const char *src)   #  把 src 所指向的字符串复制到 dest


#answer3.0
char *repeat_str(size_t count, const char *src) {
  char *result = calloc(((count * strlen(src)) + 1), sizeof(char));
  while (count--)
    strcat(result, src);
  return result;
}
// char *strcat(char *dest, const char *src)  # 把 src 所指向的字符串追加到 dest 所指向的字符串的结尾


#answer3.1 
#include <string.h>
char *repeat_str(size_t count, const char *src) {
  char *repeatStr = (char *)calloc( strlen(src) * count, sizeof(char) );
  for(int i = 0; i < count; i++){
      strncat(repeatStr, src, strlen(src));
  }
  return repeatStr;
}
// char *strncat(char *dest, const char *src, size_t n) 
// 把 src 所指向的字符串追加到 dest 所指向的字符串的结尾，直到 n 字符长度为止


#answer4.0
char * repeat_str( size_t n, const char * s ) {
  size_t slen = strlen(s);
  char * dest = malloc(n*slen+1);
  int i; char * p;
  for ( i = 0, p = dest; i < n; ++i, p += slen ) {
      memcpy(p, s, slen);
  }
  *p = '\0';
  return dest;
}
//  void *memcpy(void *str1, const void *str2, size_t n) 从存储区 str2 复制 n 个字节到存储区 str1


