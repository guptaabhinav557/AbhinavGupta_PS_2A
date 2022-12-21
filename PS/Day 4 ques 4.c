#include <stdio.h>
int Perfect_num(int n)
{
    int i,sum=0;
    for (i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (n == sum)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int start, end, i;
    printf("Enter the range start value: ");
    scanf("%d", &start);
    printf("Enter the range end value: ");
    scanf("%d", &end);
    printf("Perfect numbers are: \n");
    for (i = start; i < end; i++)
    {
        if (Perfect_num(i) == 1)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
