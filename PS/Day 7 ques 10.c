#include<stdio.h>
void main()
{
    char a[100];
    int i,j,count1=0,n;
    printf("Enter a string: ");
    gets(a);
    for(j=0;a[j];j++)
    {
        n=j;
    }
    printf("Frequency count character in string: \n");
    for(i=0;i<n;i++)
    {
        count1=1;
        if(a[i])
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]==a[j])
                {
                    count1++;
                    a[j]='\0';
                }
            }
            printf("%c = %d \n",a[i],count1);
        }
    }
    return 0;
}
