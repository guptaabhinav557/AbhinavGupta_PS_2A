char* canConstruct(int a_count, int* a)
{
    int i;
    int sum=0;
    for(i=0;i<a_count;i++)
    {
        while(a[i]!=0)
        {
            sum=sum+(a[i] % 10);
            a[i]=a[i]/10;
        }
    }
    if(sum%3==0)
    {
        return "Yes";
    }
    else
    {
        return "No";
    }
    return 0;
}
