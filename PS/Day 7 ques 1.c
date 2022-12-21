#include<stdio.h>
strlen1(char a[100]);
void main()
{
    char a[100];
    int l=0;
    printf("Enter the string: ");
    gets(a);
    int len=strlen1(a);
    printf("The length of the string is : %d",len);
}
strlen1(char a[100])
{
    int l=0;
    while(a[l]!='\0')
    {
        l++;
    }
    return(l);
}
