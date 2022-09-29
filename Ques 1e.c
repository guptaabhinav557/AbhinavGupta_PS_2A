#include<stdio.h>
void main()
{
    int date,month,year,day,m,a,b,c;
    printf("Enter date \n");
    scanf("%d",&date);
    printf("Enter month \n");
    scanf("%d",&month);
    printf("Enter year \n");
    scanf("%d",&year);
    if (month==1)
        m=1;
    else if(month==2)
        m=4;
    else if(month==3)
        m=4;
    else if(month==4)
        m=0;
    else if(month==5)
        m=2;
    else if(month==6)
        m=5;
    else if(month==7)
        m=0;
    else if(month==8)
        m=3;
    else if(month==9)
        m=6;
    else if(month==10)
        m=1;
    else if(month==11)
        m=4;
    else if(month==12)
        m=6;
    else
        printf("Wrong");
    if((year>=1500)&&(year<=1599))
        c=0;
    else if((year>=1600)&&(year<=1699))
        c=6;
    else if((year>=1700)&&(year<=1799))
        c=4;
    else if((year>=1800)&&(year<=1899))
        c=2;
    else if((year>=1900)&&(year<=1999))
        c=0;
    else if((year>=2000)&&(year<=2099))
        c=6;
    else
        printf("Wrong");
    a=year%100;
    b=a/4;
    c=date+m+c+a+b;
    day=c%7;
    switch(day)
    {
    case 0:
        printf("Day is Saturday");
        break;
    case 1:
        printf("Day is Sunday");
        break;
    case 2:
        printf("Day is Monday");
        break;
    case 3:
        printf("Day is Tuesday");
        break;
    case 4:
        printf("Day is Wednesday");
        break;
    case 5:
        printf("Day is Thursday");
        break;
    case 6:
        printf("Day is Friday");
        break;
    default:
        printf("Wrong");
    }





















}




















