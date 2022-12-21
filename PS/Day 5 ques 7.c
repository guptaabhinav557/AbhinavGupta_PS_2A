#include<stdio.h>
void main()
{
    int n,a[30],i;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter elements in a: ");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=n;i>=1;i--)
    {
        printf("%d ",a[i]);
    }
}
