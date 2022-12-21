#include<stdio.h>
int main()
{
   int a,b,c,root1,root2,D;
   printf("Enter coefficient of a,b,c:");
   scanf("%d %d %d",&a,&b,&c);
   D=(b*b)-(4*a*c);
   if(D==0)
   {
       root1= (-b+D)/(2*a);
       root2= (-b-D)/(2*a);
       printf("The roots of quadratic equation are %d %d\n",root1,root2);
   }
   else if(D>0)
   {
       root1= (-b+D)/(2*a);
       root2= (-b-D)/(2*a);
       printf("The roots of quadratic equation are %d %d\n",root1,root2);
       printf("The roots are real");
   }
   else
   {
       root1= (-b+D)/(2*a);
       root2= (-b-D)/(2*a);
       printf("The roots of quadratic equation are %d %d\n",root1,root2);
       printf("The roots are imaginary");
   }
}
