#include<stdio.h>
void main()
{
    int a[10],b[10],c[10],i,j,m,n,k=0;
    printf("Enter m");
    scanf("%d",&m);
    printf("Enter n");
    scanf("%d",&n);
    printf("Enter first elements");
    for(i=1;i<=m;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter second elements");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            c[k]=0;
            for(k=1;k<=m;k++)
            {
                if(a[i]==b[j])
                {
                    c[k]=b[j];
                    printf("%d",c[k]);
                }
            }
        }
    }

}
