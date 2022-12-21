#include<stdio.h>
#include<math.h>
void kdigit(int n)
{
    int k,r;
    printf("Enter k:");
    scanf("%d",&k);
    while(n>0 && k!=0)
    {
        r=n%10;
        n=n/10;
        k--;
    }
    if(n<=0 && k!=0)
    {
        printf("kth digit is not there");
    }
    else
    {
        printf("kth digit is %d",r);
    }
}
void main()
{
    int a,b,power;
    printf("Enter a and b:");
    scanf("%d %d",&a,&b);
    power=pow(a,b);
    kdigit(power);
}
