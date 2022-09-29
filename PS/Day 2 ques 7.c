#include<stdio.h>
void main()
{
    int i,j,n,r;
    printf("Enter n");
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {
        n=i;
        for(j=1;j<=r-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d",n);
            n--;
        }
        n++;
        for(j=1;j<=i-1;j++)
        {
            n++;
            printf("%d",n);
        }
        printf("\n");
    }
}
