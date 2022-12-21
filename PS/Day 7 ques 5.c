#include<stdio.h>
#include<string.h>
int main()
{
   char a[30];
   int i;
   printf("Enter a string: ");
   gets(a);
   for(i=0;a[i]!='\0';i++)
   {
       if(a[i]>='A' && a[i]<='Z')
       {
           a[i]=a[i]+32;
       }
       else if(a[i]>='a' && a[i]<='z')
       {
           a[i]=a[i]-32;
       }
       else
       {
           printf("Wrong Input");
       }
   }
   printf("String in Upper Case is:\n%s",a);
   return 0;
}
