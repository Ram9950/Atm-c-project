#include<stdio.h>
void main()
{int  N,n,r;
   int sum =0;
   printf("enter any integer\n");
   scanf("%d",&n);
   while(n!=0)
   {
       r=n%10;
       sum=sum*10+r;
       N=n/10;
   }
   printf("%d,r")


}