#include<stdio.h>
#define PI 3.1416
#define P printf
#define S scanf
int main()
{
  float r,area,peri;
p("enter radius value");
s("%f",&r);
area=PI*r*r;
peri=2*PI*r;
p("\n%.2f raduis,area is %.2f and its perimeter is %.2f",r,area,peri);
return 0;
}
