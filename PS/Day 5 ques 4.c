#include<stdio.h>
void main()
{
    int n,k,a[30],b[30],i,j,c[30],x,y,z,g,count1=0;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter k: ");
    scanf("%d",&k);
    printf("Enter the elements in the array: ");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]<k)
        {
            b[i]=a[i];
        }
    }
    while(j<=n)
    {
        g=b[j];
        while(g>0)
        {
            g=g/10;
            count1++;
        }
    }
    while(j<=n)
    {
        x=b[j];
        while(x>0)
        {
            y=x%10;
        }
    }
}
