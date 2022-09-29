#include<stdio.h>
void main()
{
    int i,n,p=1;
    printf("Number");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        p=p*i;
    }
    printf("factorial is %d",p);
}
