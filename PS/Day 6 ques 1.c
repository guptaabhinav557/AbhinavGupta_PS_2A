#include<stdio.h>
void main()
{
    int n,a[10][10],i,j;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter element in matrix a: ");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=1;j--)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
}
