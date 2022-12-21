#include<stdio.h>
#include<stdlib.h>
void main()
{
    int m,n,a[30][30],i,j,k=0,l=0;
    printf("Enter m and n: ");
    scanf("%d %d",&m,&n);
    printf("Enter elements in the matrix: ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The Matrix is: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("The spiral matrix is: \n");
    while(k<m && l<n)
    {
        for(i=l;i<n;i++)
        {
            printf("%d ",a[k][i]);
        }
        k++;
        for(i=k;i<m;i++)
        {
            printf("%d ",a[i][n-1]);
        }
        n--;
        if(k<m)
        {
            for(i=n-1;i>=0;--i)
            {
                printf("%d ",a[m-1][i]);
            }
            m--;
        }
        if(l<n)
        {
            for(i=m-1;i>=k;i--)
            {
                printf("%d ",a[i][l]);
            }
            l++;
        }
    }
    return 0;
}
