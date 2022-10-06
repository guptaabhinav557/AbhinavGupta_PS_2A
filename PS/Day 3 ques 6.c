#include<stdio.h>
#include<math.h>
void main()
{
    int n,i,j,sum=0,fact=1,x,num,count=0;
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
            for(j=1;j<=(2*i);j++)
            {
                fact=fact*j;
            }
            num=pow(x,(2*i));
            if(count%2==0)
            {
                sum=sum+num/fact;
            }
            else
            {
                sum=sum-num/fact;
            }
            fact=1;
        }
        count++;
    }
    printf("The sum of 1-x2/2!+x4/4!-x6/6!.......... is %d",sum);
}
