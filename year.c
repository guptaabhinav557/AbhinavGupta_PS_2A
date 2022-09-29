#include<stdio.h>
void main()
{
    int year;
    printf("Year \n");
    scanf("%d",&year);
    ((year%100!=0&&year%4==0)||year%400==0)?printf("Leap Year"):printf("Not Leap Year");
    return 0;
}
