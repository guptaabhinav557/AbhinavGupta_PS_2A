#include<stdio.h>
void main()
{
    int n,a[30],b[30],i,j=0,c=2;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a[i]=i;
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]%2!=0)
        {
            b[i-j]=a[i];
            j++;
        }
        else
        {
            b[n-(i-c)]=a[i];
            c++;
        }
    }
    for(i=1;i<=n;i++)
    {
        printf("%d ",b[i]);
    }
}
