/*
tag:
if else
*/

#answer1.0 by april
unsigned rental_car_cost(unsigned d)
{
  if (d<3) 
    return d*40;
  else if (d>=3 && d<7)
    return d*40-20;
  else
    return d*40-50;
}


#answer2.0
unsigned rental_car_cost(unsigned d)
{

 unsigned cost = d * 40;
 
 if(d<3)
   return cost;
   
 if(d<7)
   return cost - 20;
  
 return cost - 50;     
    
}
