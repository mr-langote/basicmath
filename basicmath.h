/* A basic math functions header file in c 
as First year mini project*/
#include<math.h>
int fact(int x){
  if (x==1)
    return 1;
  return (x*fact(x-1));
}
int getsum(int x){
  if (x==0)
    return 0;
  return (x+getsum(x-1));
}
int cube(int x){
  return x*x*x;
}


