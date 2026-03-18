//if else loop
#include <stdio.h>
int main()
{
    int age;
    printf("Enter Age");
    scanf("%d",&age);
    //printf("%s",age>17 ? "Eligible" : "Not Eligible");
    if(age>17)
      printf("Eligible");
    else
      printf("Not Eligible");

    return 0;
}
