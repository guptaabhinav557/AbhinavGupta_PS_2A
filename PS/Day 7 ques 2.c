#include<stdio.h>
#include<string.h>
void main()
{
    char a[100],temp;
    int i,j=0;
    printf("Enter string: ");
    gets(a);
    i=0;
    j=strlen(a)-1;
    while(i<j)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    printf("The reversed string is: %s",a);
    return 0;
}
