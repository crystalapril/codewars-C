/* 
tag:
for loop,
*/

#answer1.0 by april
int stairs_in_20(const int stairs[7][52]) {
  int sum= 0;  
  for (int i = 0; i<52;i++) {
    int d = 0;
    for (int j = 0; j<7; j++) {
      d += stairs[j][i] ;     
    }
    sum += d;    
  }
  return sum*20;
}


#answer2.0
int stairs_in_20(const int stairs[7][52]) {
    int total = 0;
    
    for (int i = 0; i < 7; i++)
      for (int j = 0; j < 52; j++)
          total += stairs[i][j];
          
    return total * 20;        
}


#answer2.1
int stairs_in_20(const int stairs[DAYS_PER_WEEK][WEEKS_PER_YEAR]) {
    int sum = 0;
    for (int d = 0;  d < DAYS_PER_WEEK;  ++d) {
        for (int w = 0;  w < WEEKS_PER_YEAR;  ++w) {
            sum += stairs[d][w];
        }
    }
    return 20 * sum;
}


