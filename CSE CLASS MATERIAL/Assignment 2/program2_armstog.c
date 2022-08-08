#include<stdio.h>
int armstrong(int);

int main()
{
    int n,result;
printf("Enter any number\n");
scanf("%d",&n);
result=armstrong(n);
if (result==1)
{
    printf("%d is armstrong number\n",n);
}
else
{
    printf("%d is not armstrong number",n);
}
return 0;
}

int armstrong(int n)
{
int rem,result,cube,num;
num=n;
while(num>0)
{
    rem=num%10;
cube=cube+(rem*rem*rem);
num=num/10;
}
if(cube==n)
return 1;
else
return 0;

}
