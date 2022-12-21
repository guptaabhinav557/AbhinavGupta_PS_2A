#include<stdio.h>
int isarmstrong(int number)
{
    int last,pow,sum=0,n;
    n=number;
    while(n!=0)
    {
        last=n%10;
        pow=last*last*last;
        sum=sum+pow;
        n=n/10;
    }
    if(sum==number)
        return 0;
    else
        return 1;
}

int main()
{
    int number;
    printf("Enter number ");
    scanf("%d",&number);
    if(isarmstrong(number)==0)
        printf("%d is an armstrong number",number);
    else
        printf("%d is not a armstrong number",number);
    return 0;
}
