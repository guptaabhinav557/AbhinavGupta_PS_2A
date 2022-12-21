#include<stdio.h>
int ifprime(int number)
{
    int i,f=1;
    for(i=2;i<=number/2;i++)
    {
        if(number%i==0)
        {
            f=0;
            break;
        }
    }
    return f;
}

int main()
{
    int start,en,i,f;
    printf("Enter start: ");
    scanf("%d",&start);
    printf("Enter end: ");
    scanf("%d",&en);
    printf("Prime between %d and %d are ",start,en);
    for(i=start;i<en;i++)
    {
        f=ifprime(i);
        if(f==1)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
