#include<stdio.h>
void main()
{
    int n,i,sum=0;
    printf("Enter n ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+((i)*(i+1)*(i+2));
    }
    printf("The sum of series 1*2*3 + 2*3*4 + 3*4*5 + .... n*(n+1)*(n+2) is %d",sum);
}
