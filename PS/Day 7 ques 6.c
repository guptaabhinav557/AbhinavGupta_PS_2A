#include<stdio.h>
int mystrcmp(char a[40], char b[40]);
int main()
{
    char a[40], b[40];
    int d;
    printf("Enter first string: ");
    gets(a);
    printf("Enter second string: ");
    gets(b);
    d = mystrcmp(a,b);
    if(d==0)
    {
        printf("Strings are same....");
    }
    else
    {
        printf("Strings are not different....");
    }
    return 0;
}
int mystrcmp(char a[40], char b[40])
{
    int d,i, len1=0, len2=0, flag=0;
    for(i=0; a[i]!='\0'; i++)
    {
        len1++;
    }
    for(i=0; b[i]!='\0'; i++)
    {
    len2++;
    }
    if(len1!=len2)
    {
        return(1);
    }
    else
    {
        for(i=0;i< len1;i++)
        {
            if(a[i]!=b[i])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            return(0);
        }
        else
        {
            return(1);
        }
    }
}
