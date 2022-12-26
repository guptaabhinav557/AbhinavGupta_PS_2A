long strangeGrid(long r, long c)
{
    int a;
    if(r%2==0)
    {
        return 1+10*((r/2)-1)+2*(c-1);
    }
    else
    {
        return 10*(r/2)+2*(c-1);
    }
}
