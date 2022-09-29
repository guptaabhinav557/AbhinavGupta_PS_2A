#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter Three Numbers \n");
    scanf("%d \n %d n %d",&a,&b,&c);
    if(a==b && a==c && b==c)
        printf("Equilateral Triangle");
    else if(a==b || b==c)
        printf("Isosceles Triangle");
    else
        printf("Scalene Triangle");
}
