#include<stdio.h>
void p1(int n)
{
    printf("%d ",n);
    if(n<=0)
        return;
    p1(n-5);
    printf("%d ",n);
}





int main()
{
    int n;
    printf("enter the value of n" );
    scanf("%d",&n);
    p1(n);
    return 0;
}
