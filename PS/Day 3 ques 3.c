#include<stdio.h>
#include<math.h>
void main()
{
    int n,i,sum=0,fact=1,x,num=1;
    printf("Enter n ");
    scanf("%d",&n);
    printf("Enter x ");
    scanf("%d",&x);
    for(i=0;i<=n;i++)
    {
        if(i==0)
        {
            sum=sum+1;
        }
        else
        {
            fact=fact*i;
            num=pow(x,i)/fact;
            sum=sum+num;
        }
    }
    printf("The sum of 1+x+x2/2!+x3/3!.......... is %d",sum);
}
