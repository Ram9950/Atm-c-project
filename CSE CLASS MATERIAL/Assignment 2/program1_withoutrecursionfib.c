// fibonacci series without usinng recursion
#include<stdio.h>
int fib(int );

int main()
{
   int n;

   printf("no of terms of finonacci series\n");
   scanf("%d", &n);

   printf("The fibonacci series is: \n");

   fib(n);

   return 0;
}
int fib(int y)
{
   int a=0, b=1, c,i;
  for (i=0;i<y;i++)
  {
      printf("%d\n",a);
      c=a+b;
      a=b;
      b=c;
  }}
