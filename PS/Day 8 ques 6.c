#include<stdio.h>
void main()
{
    int r;
    float A;
    printf("Enter radius of given circle:");
    scanf("%d",&r);
    A=2*(r*r);
    printf("The area of the largest rectangle that can be inscribed in the circle is %f",A);
}
