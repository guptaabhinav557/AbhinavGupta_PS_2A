int chocolates(int arr[], int l, int r) {
    // code here
    int i,num;
    num=arr[0];
    for(i=0;i<=r;i++)
    {
        if(num>arr[i])
        {
            num=arr[i];
        }
    }
    return num;
}
