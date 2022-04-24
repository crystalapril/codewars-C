'''
tag:
pointer
'''

#answer1.0 by april
void count_positives_sum_negatives(
  int *values, size_t count, int *positivesCount, int *negativesSum) 
{  
  for (int i=0;i<count;i++) {
    if (values[i] > 0){
      (*positivesCount)++;}
    else if (values[i] < 0 ){
      (*negativesSum) +=values[i];}
  }  
}

#answer2.0 
void count_positives_sum_negatives(int *values, size_t count, int *positivesCount, int *negativesSum) {
  int cnt = 0; int sm = 0;
  for (size_t i = 0; i < count; i++) {
    if (values[i] > 0) cnt++;
    if (values[i] < 0) sm += values[i];
  }
  *positivesCount = cnt;
  *negativesSum = sm;
}


#answer3.0
void count_positives_sum_negatives(int *values, size_t count, int *positivesCount, int *negativesSum){
  while(count--){
    values[count]<=0 ? (*negativesSum)+=values[count] : (*positivesCount)++;
  }
}


#answer4.0
void count_positives_sum_negatives(int *values, size_t count, int *positivesCount, int *negativesSum) {
  if(!count) {
    return;
  }
  
  for(int i=0; i<count; i++) {
    *positivesCount += values[i] > 0 ? 1 : 0;
    *negativesSum += values[i] < 0 ? values[i] : 0;
  }
}

