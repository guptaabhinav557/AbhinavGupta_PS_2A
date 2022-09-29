#include<stdio.h>
void  main()
{
    int a[100],i,n;
    printf("Enter n");
    scanf("%d",&n);
    printf("Enter the elements \n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        printf("%d",a[i]);
    }
}
