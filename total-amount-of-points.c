/*
tag:
array, char
*/

#answer1.0 by april
int points(const char* const games[10]) {
  int sum = 0;
  for (int i=0;i<10;i++){
    if (games[i][0] > games[i][2] )
      sum += 3;
    else if (games[i][0] == games[i][2])
      sum += 1;
  }  
  return sum;
}


#answer2.0
int points(char* games[])
{
  int sum = 0;
  for (int i = 0; i < 10; i++)
    sum += games[i][0] > games[i][2] ? 3
         : games[i][0] < games[i][2] ? 0
         : 1;
  return sum;
}


#answer3.0
int points(char* games[]) {
    int points = 0; 
    int x, y;
    
    for (int i = 0; i < 10; i++)
    {
      sscanf(games[i], "%d:%d", &x, &y);
      if (x > y) points += 3;
      else if (x == y) points += 1;
    }   
    return points;
}
//int sscanf(const char *str, const char *format, ...) 从字符串读取格式化输入

