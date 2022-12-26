int restaurant(int l, int b)
{
    int max,min,i;
    max= l>b?l:b;
    min=l+b-max;
    i=min/2;
    if(max%min==0)
    {
        return max/min;
    }
    while(l)
    {
        if(min%i==0 && max%i==0)
        {
            return (max/i)*(min/i);
        }
        i--;
    }
    return 0;
}
