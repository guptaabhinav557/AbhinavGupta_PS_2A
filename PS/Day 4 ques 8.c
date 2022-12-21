#include<stdio.h>
int main()
{
    int a,b,result;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    result=gcd(a,b);
    printf("The gcd of %d and %d is %d",a,b,result);
}

int gcd(int a,int b)
{
    if(a<b)
        return gcd(b,a);
    else if(b==0)
        return a;
    else if(a>=b)
        return gcd(b,a%b);
}
