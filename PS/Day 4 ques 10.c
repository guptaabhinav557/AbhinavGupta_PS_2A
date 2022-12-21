#include<stdio.h>
int pow(int a,int b)
{
    int pow=1,i;
    for(i=1;i<=b;i++)
    {
        pow=pow*a;
    }
    return pow;
}
int main()
{
    int a,b,result;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    result=pow(a,b);
    printf("%d power to %d is %d",a,b,result);
}
