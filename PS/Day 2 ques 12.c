#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i+1;j++)
        {
            printf("%d",j);
        }
        if(i!=1)
        {
            for(j=1;j<=2*(i-1)-1;j++)
        {
            printf(" ");
        }
        }
        for(j=n-i+1;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
