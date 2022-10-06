#include<stdio.h>
void main()
{
    int n,i,fact=1,sum=0;
    printf("Enter n ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        sum=sum+fact;
    }
    printf("The sum of 1!+2!+3!+......%d is %d",n,sum);
}
