'''
tag:
char, pointer
'''

#answer1.0 by april
const char * even_or_odd(int number) {
  char *e ="Even";
  char *o = "Odd";
  if (number % 2 !=0) {
    return o;    
  }
  return e;
};


#answer2.0
const char * even_or_odd(int n)
{
  return (n & 1)?("Odd"):("Even");
}


#answer3.0
const char * even_or_odd(int n) {
  if (n % 2 == 0) return "Even";
  else return "Odd";
}

#answer4.0
const char * even_or_odd(int number)
{
    return number%2 ? "Odd" : "Even";
}


