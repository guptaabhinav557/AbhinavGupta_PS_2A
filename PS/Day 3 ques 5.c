#include<stdio.h>
#include<math.h>
void main()
{
    int n,i,j,sum=0,fact=1,x,num,count=0;
    printf("Enter n ");
    scanf("%d",&n);
    printf("Enter x ");
    scanf("%d",&x);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(2*i-1);j++)
        {
            fact=fact*j;
        }
        num=pow(x,(2*i-1));
        if(count%2==0)
        {
            sum=sum+num/fact;
        }
        else
        {
            sum=sum-num/fact;
        }
        count++;
        fact=1;
    }
    printf("The sum of x-x3/3!+x5/5!-x7/7!.......... is %d",sum);
}
