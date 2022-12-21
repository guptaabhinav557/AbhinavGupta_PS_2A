#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i,len,temp;
    printf("Enter string: ");
    gets(a);
    i=0;
    len=strlen(a);
    for(i=0;i<len;i++)
    {
        if(a[i]!= a[len-i-1])
        {
            temp=1;
            break;
        }
    }
    if(temp==0)
    {
        printf("The string is a palindrome");
    }
    else
    {
        printf("The string is not a palindrome");
    }
    return 0;
}
