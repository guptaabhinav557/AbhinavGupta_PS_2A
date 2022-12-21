#include<stdio.h>
int dig(int n)
{
    int sum=0;
    while(n>0 || sum > 9)
    {
        if(n==0)
        {
            n=sum;
            sum=0;
        }
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main()
{
    int n,r;
    printf("Enter non negative integer digit: ");
    scanf("%d",&n);
    r=dig(n);
    printf("%d",r);
    return 0;
}
