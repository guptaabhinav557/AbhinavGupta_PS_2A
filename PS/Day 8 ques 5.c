#include<stdio.h>
int leastprimefactor(int n)
{
    if (n % 2 == 0)
        return 2;
    for (int i=3;i<=n;i+= 2)
    {
        if (n % i == 0)
            return i;
    }
    return n;
}
void main()
{
    int n,i;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("The least prime factor of %d is:%d\n",i,leastprimefactor(i));
    }
    return 0;
}
