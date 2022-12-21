#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[100],b[100],c[100],d[100],n,i,j,k=0,l=0,temp;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter elements in first array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter elements in second array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(b[j]>b[j+1])
            {
                temp=b[j];
                b[j]=b[j+1];
                b[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==b[i])
        {
            c[k]=a[i];
            k++;
        }
        else
        {
            d[l]=a[i];
            l++;
            d[l]=b[i];
            l++;
        }
    }
    printf("The elements that are there in both arrays are:");
    for(i=0;i<k;i++)
    {
        printf("%d\n",c[i]);
    }
    printf("The elements that are not there in both arrays are:");
    for(i=0;i<l;i++)
    {
        printf("%d\n",d[i]);
    }
}
