#include<stdio.h>
void main()
{
    int a[100],n,i,j,t,pos,min;
    printf("Enter the number of elements ");
    scanf("%d",&n);
    printf("Enter the elements ");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        min=a[i];
        pos=i;
        for(j=i+1;j<=n;j++)
        {
            if(min>a[j])
            {
                min=a[j];
                pos=j;
            }
        }
        t=a[i];
        a[i]=a[pos];
        a[pos]=t;
    }
    printf("The sorted array is ");
    for(i=1;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
}
