#include<stdio.h>
void main()
{
    int n,i,fact=1,sum=0;
    printf("Enter n ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=(fact*i)/i;
        sum=sum+fact;
        fact=fact*i;
    }
    printf("The sum of 1!/1+2!/2+3!/3+......%d is %d",n,sum);
}
