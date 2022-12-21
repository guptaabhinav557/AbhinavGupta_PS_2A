#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i,j;
    printf("Enter a string:");
    gets(a);
    printf("String before :%s",a);
	for(i=0;a[i]==' '||a[i]=='\t';i++);

	for(j=0;a[i];i++)
	{
		a[j++]=a[i];
	}
	a[j]='\0';
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]!=' '&& a[i]!='\t')
				j=i;
	}
	a[j+1]='\0';
    printf("\nString after :%s",a);
}

