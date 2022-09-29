#include<stdio.h>
void main()
{
    int i,n,f1=0,f2=1,f3;
    printf("n=");
    scanf("%d",&n);
    printf("The series is %d \n %d \n",f1,f2);
    for(i=1;i<=n-2;i++)
    {
       f3=f1+f2;
       printf("%d \n",f3);
       f1=f2;
       f2=f3;
    }
}
