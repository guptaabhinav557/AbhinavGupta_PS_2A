int* selfDividingNumbers(int left, int right, int* returnSize)
{
    int i,j=0,k,count,num;
    *returnSize=right-left;
    int *a=calloc(sizeof(int),(*returnSize));
    for(i=left;i<=right;i++)
    {
        k=i;
        count=0;
        while(k>0)
        {
            num=k%10;
            if(num==0 || i%num!=0)
            {
                count=1;
                break;
            }
            k=k/10;
        }
        if(count==0)
        {
            a[j++]=i;
        }
    }
    *returnSize=j;
    a=realloc(a,sizeof(int)*(*returnSize));
    return a;
}
