#include<stdio.h>
int palindrome(int n,int temp)
{
    if(n==0)
    {
        return temp;
    }

    temp=temp*10+n%10;
    return palindrome(n/10,temp);
}
int main()
{
    int n;
    printf("Enter n ");
    scanf("%d",&n);
    int temp=palindrome(n,0);
    printf("%d \n",temp);
    if(temp==n)
    {
        printf("It is palindrome",n);
    }
    else
    {
        printf("It is not palindrome");
    }
    return 0;
}
