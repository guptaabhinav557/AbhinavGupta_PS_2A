#include<stdio.h>
int fibo(int n)
{
    if(n==1)
        return 0;
    else if(n==2)
        return 1;
    else
        return (fibo(n-1)+fibo(n-2));
}

int main()
{
    int i=1,n,f;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("The fibonacci series is ");
    while(i<=n)
    {
        f=fibo(i);
        printf("%d ",f);
        i++;
    }
}
