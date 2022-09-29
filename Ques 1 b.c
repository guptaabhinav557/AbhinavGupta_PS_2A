//ABHINAV GUPTA
//2100320130008
#include<stdio.h>
void main()
{
    int num[20],n,i,largest=0;
    printf("total number");
    scanf("%d",&n);
    printf("enter total numbers");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++)
    {
        if(num[i]>largest)
            largest=num[i];
    }
    printf("Largest no is \n %d",largest);

}
