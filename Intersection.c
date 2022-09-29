#include<stdio.h>
void main()
{
    int a[100],b[100],c[100],i,j,m,n;
    printf("Enter n");
    scanf("%d",&n);
    printf("Enter m");
    scanf("%d",&m);
    printf("Enter first elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter second elements");
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("Intersection of  A and B \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
                printf("%d \t",a[i]);
            }
        }
    }

}
