//ABHINAV GUPTA 2100320130008
#include<stdio.h>
void main()
{
    int n;
    printf("Enter n");
    scanf("%d",&n);
    int a[n];
    int b[n];
    int k=0;
    printf("Enter a");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Reverse:\n");
    for(int i=n-1;i>=0;i--)
    {
        b[k] = a[i];
        k++;
    }
    printf("Array b");
    for(int i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
}
