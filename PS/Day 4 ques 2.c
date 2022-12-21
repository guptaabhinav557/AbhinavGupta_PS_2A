#include<stdio.h>
void meanmedian()
{
    int i,sum=0,a[30],m,median;
    printf("Enter a");
    for(i=1;i<=5;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    m=sum/5;
    median=a[3];
    printf("Mean is %d \n",m);
    printf("Median is %d",median);
}
void main()
{
    meanmedian();
}
