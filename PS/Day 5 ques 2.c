#include<stdio.h>
void main()
{
    int a[30],i,n,max1;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter length of candles: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max1=a[0];
    for(i=0;i<n;i++)
    {
        if(max1<a[i])
        {
            max1=a[i];
        }
    }
    printf("The number of days the room was without darkness is %d",max1);
}
