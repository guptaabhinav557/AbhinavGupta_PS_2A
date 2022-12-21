#include<stdio.h>
int main()
{
    int a[100],n,i,res;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter numbers in array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    res=a[0];
    for(i=1;i<n;i++)
    {
        res^=a[i];
    }
    printf("The number is %d",res);
}
