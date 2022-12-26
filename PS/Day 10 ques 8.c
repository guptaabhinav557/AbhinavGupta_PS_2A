long halloweenParty(int k)
{
    long vertical,horizontal,product;
    if(k%2==0)
    {
        horizontal=k/2;
        vertical=k/2;
        product=horizontal*vertical;
        return product;
    }
    else
    {
        vertical=k/2;
        horizontal=vertical+1;
        product=horizontal*vertical;
        return product;
    }
}
