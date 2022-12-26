#include <stdio.h>
int main()
{
    int t,n,k,i,a[100],j=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&k);
        for(i=0;i<n;i++)
        {
            a[j]=i;
            j++;
        }
        j=1;
    }
}
