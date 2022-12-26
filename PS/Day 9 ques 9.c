bool checkPerfectNumber(int num)
{
    int i,sum=0;
    for (i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    if (num == sum)
    {
        return 1;
    }
    return 0;
}
