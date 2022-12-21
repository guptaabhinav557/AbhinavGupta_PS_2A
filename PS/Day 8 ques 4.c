#include<stdio.h>
void main()
{
    int a,b[100],r,n,i,sum=0,sum1=0,j;
    printf("Enter a number:");
    scanf("%d",&a);
    n=sizeof(a);
    j=n+2;
    while(a>0)
    {
        r=a%10;
        a=a/10;
        b[j]=r;
        j--;
    }
    for(i=0;i<((n+1)/2)+1;i++)
    {
        sum+=b[i];
    }
    for(i=(n+1)/2;i<n;i++)
    {
        sum1+=b[i];
    }
    if(sum==sum1)
    {
        printf("%d %d",sum,sum1);
        printf("\nIt is a balanced number.");
    }
    else
    {
        printf("%d %d",sum,sum1);
        printf("\nIt is not a balanced number.");
    }
}
