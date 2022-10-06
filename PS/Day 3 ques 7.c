#include<stdio.h>
void main()
{
    int n,i,j,fact=1,sum=0,count=0;
    printf("Enter n ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(2*i-1);j++)
        {
            fact=fact*j;
        }
        if(count%2==0)
        {
            sum=sum+(i/fact);
        }
        else
        {
            sum=sum-(i/fact);
        }
        count++;
        fact=1;
    }
    printf("The sum of 1/1!-2/3!+3/5!-4/7!...... is %d",sum);
}
