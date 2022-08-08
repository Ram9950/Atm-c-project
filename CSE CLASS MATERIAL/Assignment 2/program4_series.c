#include<stdio.h>
void main()
{
    int n,i,s=0,sum=0;
    printf("Enter number of terms\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
s=s*10+1;
printf("%d",s);
sum=sum+s;
printf("+");
    }
    printf("\nsum of series is %d",sum);
}