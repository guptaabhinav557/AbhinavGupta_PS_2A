#include<stdio.h>
void main()
{
    int i,n,f1=0,f2=1,f3;
    printf("Enter the no. of terms to generate series");
    scanf("%d",&n);
    printf("The series is %d \n %d",f1,f2);
    for(i=1;i<=n-2;i++)
    {
        f3=f1+f2;
        printf("%d",f3);
        f1=f2;
        f2=f3;
    }
}
