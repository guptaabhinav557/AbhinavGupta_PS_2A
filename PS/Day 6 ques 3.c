#include<stdio.h>
int main()
{
    int a[10][10],n,i,j,sum1=0,flag=0,flag1=0;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter elements in matrix a");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j)
            {
                sum1=sum1+a[i][j];
            }
        }
    }
    for(i=1;i<=n;i++)
    {  int sum2=0;
        for(j=1;j<=n;j++)
        {
            sum2=sum2+a[i][j];
        }
        if(sum2==sum1)
        {
            flag=1;
        }
        else
        {
            flag=0;
            break;
        }
    }
    for(i=1;i<=n;i++)
    {  int sum3=0;
        for(j=1;j<=n;j++)
        {
            sum3=sum3+a[j][i];
        }
        if(sum3==sum1)
        {
            flag1=1;
        }
        else
        {
            flag1=0;
            break;
        }
    }
    if(flag==1 && flag1==1)
        {
            printf("Given matrix is a magic matrix");
        }
    else
        {
            printf("Given matrix is not a magic matrix");
        }
}
