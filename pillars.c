/*
tag:
multiply
*/

#answer1.0 by april
long pillars(int num_of_pillars, int distance, int width) {
  if (num_of_pillars == 1)
    return 0;
  return (num_of_pillars-2)* width + (num_of_pillars-1)* distance*100;
}

#answer2.0
long pillars(int n, int d, int w) {
  return n == 1? 0 : --n * d * 100 + --n * w;
}


#answer3.0
long pillars(int n, int d, int w) {
  return n == 1? 0 : --n * d * 100 + --n * w;
}


