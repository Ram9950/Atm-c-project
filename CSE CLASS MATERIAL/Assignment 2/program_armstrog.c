#include<stdio.h>
int armstrong(int);
int main(){
   int x,sum;
    armstong(x);
    if(x==sum)
printf("%d is armstrong",x);
else
printf("%d is not armstrong",x);

    return 0;
}
int armstrong(int n)
{
    int n,rem,c ,result,sum=0,temp;       // rem stands for remainder
    printf("enter any number :\n");
    scanf("%d",&n);
    temp=n;

    while(n>0)
    {
         rem=n%10;
         c=rem*rem*rem;
         sum=sum+c;
         n=n/10;
         }
         n=temp;
if (n==sum)
return 0;
else
return 1;
}


