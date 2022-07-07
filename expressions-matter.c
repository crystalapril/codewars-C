/*
tag:
max
*/

#answer1.0
int expression_matter(int a, int b, int c) {
  int r = a + b + c;
  if ((a + b) * c > r) r = (a + b) * c;
  if (a * (b + c) > r) r = a * (b + c);
  if (a * b * c > r) r = a * b * c;
  return r;
}

#answer2.0
int expression_matter (int a, int b, int c) {
  if (a==1) ++b;
  if (c==1) ++b;
  if (b==1) if (a<c) ++a; else ++c;
  return a*b*c;
}

#answer3.0
int expression_matter(int a, int b, int c)
{
    int max,i;
    int ex[]={0,a*(b+c),a*b*c,a+b*c,(a+b)*c,a+b+c};
    max=0;
   
   for(i=1;i<=5;i++)
   {
       if(ex[i]>max)
           max=ex[i];
    }
  return max;


#answer4.0 by april
int expression_matter(int a, int b, int c) {  
  int p1 = a * (b + c);
  int p2 = a * b * c;
  int p3 = a + b * c;
  int p4 = (a + b) * c; 
  int p5 = a * b + c;
  int p6 = a + b + c;
  int max = p1;
  
  if (p1 < p2)
    max = p2;
  if (max < p3)
    max = p3;
  if (max < p4)
    max = p4;
  if (max < p5)
    max = p5;
  if (max < p6)
    max = p6;
  return max ;
}
