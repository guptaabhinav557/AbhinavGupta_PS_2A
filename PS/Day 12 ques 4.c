class Solution{
public:
    int maxDays(int arr[],int n)
    {
        int max1,i;
        max1=arr[0];
        for(i=0;i<n;i++)
        {
            if(max1<arr[i])
            {
                max1=arr[i];
            }
        }
        return max1;
    }
};
