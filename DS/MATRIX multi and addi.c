//ABHINAV GUPTA
//2100320130008
#include<stdio.h>
void main()
{
    int a[3][3],b[3][3],c[3][3],d[3][3],i,j,k;
    printf("Enter the element of Matrix A \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the element of Matrix B \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("The multiplication of matrix is \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=0;
            for(k=0;k<3;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    printf("The addition of two matrix are \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            d[i][j]=a[i][j]+b[i][j];
            printf("%d ",d[i][j]);
        }
        printf("\n");
    }
}
