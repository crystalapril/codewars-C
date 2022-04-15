'''
tag
if else
'''
  
#answer1.0 by april
int area_or_perimeter(int l , int w) {
    return l==w ? l*l : (l+w)*2;
}

#answer2.0
int area_or_perimeter(int l , int w) {
  if (l-w) return (l+w)<<1;
  return l*w;
}

#answer3.0
int area_or_perimeter(int l , int w)
{
  int res;
  
  res = 0;
  if (l == w)
    res = l * w;
  else
    res = (l + w) * 2;
  return (res);
}

