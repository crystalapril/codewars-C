/*
tag:
bin 
*/

#answer1.0 by april
unsigned bin_to_decimal(const char *bin) {
  unsigned sum=0;
  int len = strlen(bin);
  for (int i=0; i<len;i++) {
    sum += (bin[len-i-1]  - '0') * pow(2,i);    
  }
  return sum;
};


#answer2.0
unsigned bin_to_decimal(const char *bin)
{
  return strtol(bin, 0, 2);
}
// long int strtol(const char *str, char **endptr, int base) 
// 把参数 str 所指向的字符串根据给定的 base 转换为一个长整数（类型为 long int 型），base 必须介于 2 和 36（包含）之间，或0


#answer3.0
unsigned bin_to_decimal(const char *bin)
{
    unsigned dec = 0;
    while (*bin)
        dec = dec * 2 + *bin++ - '0';
    return dec;
}


#answer4.0
unsigned bin_to_decimal(const char *bin) {
  unsigned int x = 0;
  while (*bin) x = x * 2 + *bin++ - '0';
  return x;
}


#answer5.0
unsigned bin_to_decimal(const char *bin)
{
  int len = strlen(bin);
  unsigned int dec = 0;
  
  while (*bin) {
    dec += (*bin - '0') * pow(2, --len);
    bin++;
  }
  
  return dec;
}

