#include<stdio.h>
void main()
{
    int a[3][3],b[3][3],c[3][3],d[3][3],i,j,k;
    printf("Enter the element of Matrix A");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter the element of Matrix B");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=0;
            for(k=0;k<3;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
            printf("%d \t",c[i][j]);
        }
        printf("\n");
    }
    d[i][j]=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            d[i][j]=a[i][j]+b[i][j];
        }

    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d \t",d[i][j]);
        }
        printf("\n");
    }
}
