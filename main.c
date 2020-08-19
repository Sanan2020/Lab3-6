#include <stdio.h>
int main(void)
{ 
  float r ,h ,Area;    
  printf("Enter r : ");
  scanf("%f", &r);     
  printf("Enter h : ");
  scanf("%f", &h);    
  Area = (2*3.1428571429*r)*h + 2*(3.1428571429*(r*r));
  printf("Area is %f", Area); 
  return 0;
}
