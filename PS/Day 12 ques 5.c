int multiply(int arr[], int n)
{
    int i,sum1=0,sum2=0,multiply=0,m;
    m=n/2;
    for(i=0;i<m;i++)
    {
        sum1=sum1+arr[i];
    }
    for(i=m;i<n;i++)
    {
        sum2=sum2+arr[i];
    }
    multiply=sum1*sum2;
    return multiply;
}
