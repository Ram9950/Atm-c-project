#include<stdio.h>
int main()
{
	 int a,b, hcf, lcm, i,min;
	 
	 printf("Enter two numbers: ");
	 scanf("%d%d", &a,&b);
	 min=(a<b) ? a :b;
	 for(i=1;i<=min;i++)
   {
     if(a%i==0 && b%i==0)
     {
       hcf=i;
     }
   }
   lcm=(a*b)/hcf;
   printf("lcm=%d\n",lcm);
   printf("hcf=%d\n",hcf);
   return 0;
}

