#include<stdio.h>
int main()
{
  float capital, intrest_rate,no_of_years,simple_intrest,si;
printf("enter capital");
scanf("%f",capital);
printf("enter intrest rate");
scanf("%f",& intrest_rate);
printf("enter no of years");
scanf("%f",& no_of_years);
si=(capital*intrest_rate*no_of_years);
printf("\ncapital:%.2f",capital);
printf("\nintrest rate:%.2f",intrest_rate);
printf("\nno of year:%.2f",no_of_year);
printf("\nsimple intrest on above data:%.2f",si);
return 0;
}
