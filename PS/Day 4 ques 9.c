#include<stdio.h>
int gcd(int a,int b)
{
    if(a<b)
        return gcd(b,a);
    else if(b==0)
        return a;
    else if(a>=b)
        return gcd(b,a%b);
}

int lcm(a,b)
{
    return (a/gcd(a,b))*b;
}

int main()
{
    int a,b,result;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    result=lcm(a,b);
    printf("The lcm of %d and %d is %d",a,b,result);
}
