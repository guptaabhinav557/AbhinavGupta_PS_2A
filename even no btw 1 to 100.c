#include<stdio.h>
void main()
{
    int i,c=0;
    for(i=1;i<=100;i++)
    {
        if(i%2==0)
        {
            printf("%d");
        c++;
        }
    }
    printf("Total even no are %d",c);
}
