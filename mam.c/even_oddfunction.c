/******** ODD EVEN USIING FUNCTON.************/
#include<stdio.h>
int iseven_odd(int);
int prime(int);

int main()
{
    int num;
    printf("enter any number\n");
    scanf("%d",&num);
   iseven_odd(num);
   prime(num);
   return 0;
}
int iseven_odd(int num)
{
    if (num%2==0)
    {
        printf("even\n");
    }
    else
    printf("odd\n");
}


int prime(int num)
{
    int i,count=0;
    
    

for(i=1;i<=num;i++)
{
   
    if(num%i==0)
    {
        
        count++;
    }
    
}

if(count==2 )
{
    printf("prime");
}
else if(num==1 ||  num==0)
{
    printf("neither prime nor composite");
}
else
{
    printf("not prime");
}
}
