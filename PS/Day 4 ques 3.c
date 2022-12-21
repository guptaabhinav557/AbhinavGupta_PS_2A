#include<stdio.h>
int factorial(int n,int r)
{
    if (n==1)
        return r;
    else
        return factorial(n-1,n*r);
}
void main()
{
    int num;
    printf("Enter num ");
    scanf("%d",&num);
    printf("The factorial of %d is %d\n",num,factorial(num,1));
}
