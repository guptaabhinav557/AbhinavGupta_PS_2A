//ABHINAV GUPTA
//2100320130008
#include<stdio.h>
void main()
{
    int a[100],n,i,b=0,avg;
    printf("Enter no. of students");
    scanf("%d",&n);
    printf("Enter the marks of students");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        b=b+a[i];
    }
    avg=b/n;
    printf("The average of marks of students %d",avg);
}
