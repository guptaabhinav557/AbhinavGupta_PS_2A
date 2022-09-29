#include<stdio.h>
void main()
{
    int x,y;
    printf("Quadrants \n");
    scanf("%d \n %d",&x,&y);
    if (x>0 && y>0)
        printf("1st quadrant");
    else if(x<0 && y>0)
        printf("2nd quadrant");
    else if(x<0 && y<0)
        printf("3rd quadrant");
    else if(x>0 && y<0)
        printf("4th quadrant");
    else
        printf("Origin");
}
