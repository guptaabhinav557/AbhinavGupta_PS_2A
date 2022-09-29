#include<stdio.h>
void main()
{
    int i,j,k=0,count1=0,count2=0;
    for (i=1;i<=4;i++)
    {
        for(j=1;j<=4-i;j++)
        {
            printf(" ");
            count1++;
        }
        while(k!= 2*i -1)
        {
            if(count1<=3)
            {
                printf("%d",i+k);
                count1++;
            }
            else
            {
                count2++;
                printf("%d",(i+ k- 2 * count2));
            }
            k++;
        }
        count1=count2=k=0;
        printf("\n");
    }
}
