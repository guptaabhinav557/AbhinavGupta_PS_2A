#include<stdio.h>
void main()
{
    int a[30],i,n,num;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter tastiness of chocolates: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    num=a[0];
    for(i=0;i<n;i++)
    {
        if(num>a[i])
        {
            num=a[i];
        }
    }
    printf("His sister will get the chocolate with tastiness %d",num);
}
