// fibonacci series using recursion
#include<stdio.h>
 
int fib(int);
 
void main()
{
   int n, f;
   printf("enter the value of n?");
   scanf("%d",&n);
 f=fib(n);
 printf("%d",f);
}
 //fibonacci series function
int fib(int n)
{
   if ( n == 0 )      // Base condition
      return 0;
   else if ( n == 1 )   // Base condition
      return 1;
   else
      return (fib(n-1) + fib(n-2) );
} 