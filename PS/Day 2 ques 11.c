#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }

        for(j=(n-i)*2;j>=1;j--)
        {
            printf(" ");
        }

        for(j=i;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
