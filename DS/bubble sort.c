//ABHINAV GUPTA
//2100320130008
#include<stdio.h>
void main()
{
    int n,i,j,a[100],num;
    printf("Enter number of elements ");
    scanf("%d",&n);
    printf("Enter the elements ");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n-1;i++)
    {
        for(j=1;j<=n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                num=a[j];
                a[j]=a[j+1];
                a[j+1]=num;
            }
        }
    }
    printf("Sorted array is ");
    for(i=1;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
