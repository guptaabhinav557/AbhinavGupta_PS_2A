#include<stdio.h>
int main()
{
    int arr[30],sum=0,sum1=0,multiply,n,i;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter array: ");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<=n/2;i++)
    {
        sum=sum+arr[i];
    }
    for(i=(n/2)+1;i<=n;i++)
    {
        sum1=sum1+arr[i];
    }
    multiply=sum*sum1;
    printf("The multiplication is %d",multiply);

}
