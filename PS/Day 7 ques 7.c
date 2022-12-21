#include<stdio.h>
void mystrcat(char a[100],char[100]);
int main()
{
    char a[100],b[100];
    printf("Enter first string: ");
    gets(a);
    printf("Enter second string: ");
    gets(b);
    mystrcat(a,b);
    printf("Concatenated string is: %s",a);

    return 0;
}
void mystrcat(char a[100],char b[100])
{
    int i,len=0;
    for(i=0;a[i]!='\0';i++)
    {
        len++;
    }
    for(i=0;b[i]!='\0';i++)
    {
        a[len+i]=b[i];
    }
    a[len+i]='\0';
}
