#include<stdio.h>
void main()
{
    int total=0,marks[20],i=0,n;
    float avg;
    printf("Number of students \n");
    scanf("%d",&n);
    printf("Enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&marks[i]);
    }

    for(i=0;i<n;i++)
    {
        total=total + marks[i];
    }
    avg=total/n;
    printf("%d",avg);

}
