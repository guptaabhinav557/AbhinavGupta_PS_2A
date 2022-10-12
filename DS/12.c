//ABHINAV GUPTA 2100320130008
#include<stdio.h>
void main()
{
    int A[30],B[30],C[30],i,j,k=1,m,n,count=0;
    printf("Enter m,n");
    scanf("%d",&m);
    scanf("%d",&n);
    printf("Enter a");
    for(i=1;i<=m;i++)
        scanf("%d",&A[i]);
    printf("Enter b");
    for(i=1;i<=n;i++)
        scanf("%d",&B[i]);
    for(i=1;i<=m;i++)   // for(a-b)
    {  for(j=1;j<=n;j++)
        {   if(A[i]==B[j])
        {  count++;
    break;    }   }
    if(count==0)
        {   if(A[i]==C[k-1])
                break;
            else
            {   C[k]=A[i];
                k++;   }   } count=0;  }
    for(i=1;i<=n;i++) //for (b-a)
    {  for(j=1;j<=m;j++)
        {   if(B[i]==A[j])
        {  count++;
                break;    }   }
    if(count==0)
        {   if(B[i]==C[k-1])
                break;
            else
            {   C[k]=B[i];
                k++;   }   } count=0;  }
    printf("Symmetric difference is ");
    for(i=1;i<k;i++)
        printf("%d ",C[i]);
}




