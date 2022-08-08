// fibonacci series using RECURSION.
#include <stdio.h>
int fib(int);
int main()
{
int i,n,f;
printf("How many terms of fibonacci series that you want to print?:");
scanf("%d",&n);
for (i=0;i<=n;i++)
{
    printf("%5d",fib(i));
}
return 0;
}
int fib(int n)
{
   if ( n == 0 )      // Base condition
      return 0;
   else if ( n == 1 )   // Base condition
      return 1;
   else
      return (fib(n-1) + fib(n-2) );
}

