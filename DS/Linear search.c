//ABHINAV GUPTA
//2100320130008
#include<stdio.h>
void main()
{
    int i,j,n,a[100],num,f=0;
    printf("Enter n ");
    scanf("%d",&n);
    printf("Enter elements in the array \n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number to be searched \n");
    scanf("%d",&num);
    for(i=1;i<=n;i++)
    {
        if(a[i]==num)
        {
            printf("%d is found at %d \n",num,i);
            f++;
        }
    }
    if(f==0)
    {
        printf("Element not found");
    }

}
