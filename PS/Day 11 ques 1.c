#include<stdio.h>
#include<math.h>
long gcd(long a,long b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        return gcd(b,a%b);
    }
}
int main()
{
    long t,x1,y1,x2,y2,x,y;
    scanf("%ld",&t);
    while(t--)
    {
        scanf("%ld%ld%ld%ld",&x1,&y1,&x2,&y2);
        x=abs(x2-x1);
        y=abs(y2-y1);
        printf("%ld\n",(gcd(x,y)-1));
    }
    return 0;
}
