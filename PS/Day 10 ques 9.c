#include<stdio.h>
int main()
{
    long m,n,a,b,k,total=0;
    scanf("%ld%ld",&n,&m);
    while(m--)
    {
        scanf("%ld%ld%ld",&a,&b,&k);
        total+=(b-a+1)*k;
    }
    total=total/n;
    printf("%ld\n",total);
    return 0;
}
