//ABHINAV GUPTA
//2100320130008
#include <stdio.h>
int main()
{
    int i, low, high, mid, n, num, array[100];
    printf("Enter number of elements\n");
    scanf("%d",&n);
    printf("Enter %d integers \n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Enter value to find\n");
    scanf("%d", &num);
    low = 0;
    high = n - 1;
    mid = (low+high)/2;
    while (low <= high)
    {
        if(array[mid] < num)
            low = mid + 1;
        else if (array[mid] == num)
        {
            printf("%d found at location %d", num, mid+1);
            break;
        }
        else
            high = mid - 1;
            mid = (low + high)/2;
    }
    if(low > high)
        printf("Not found! %d is not present in the list", num);
        return 0;
}
