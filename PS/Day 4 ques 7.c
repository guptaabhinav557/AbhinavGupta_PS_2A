#include <stdio.h>
int Strong_num(int n)
{
    int i,sum=0,last,fact,c;
    c=n;
    while(c>0)
    {
        fact=1;
        last=c%10;
        for(i=1;i<=last;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        c=c/10;
    }
    if(sum==n)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int start, end, i;
    printf("Enter the range start value: ");
    scanf("%d", &start);
    printf("Enter the range end value: ");
    scanf("%d", &end);
    printf("Strong numbers are: \n");
    for (i = start; i <=end; i++)
    {
        if (Strong_num(i) == 1)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
