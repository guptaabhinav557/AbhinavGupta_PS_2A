#include<stdio.h>
void main()
{
    int a[30],i,n,b;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i=i+2)
    {
        b=a[i];
        a[i]=a[i+1];
        a[i+1]=b;
    }
    for(i=1;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
}
