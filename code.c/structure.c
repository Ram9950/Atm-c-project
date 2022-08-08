#include<stdio.h>
int main()
{
    int a,b,c;
    float ratio;
    printf("Enter the values of a,b,c :");
    scanf("%d%d%d",&a,&b,&c);
    ratio=a/(b-c);
if(b>=c)
{
    printf("possible ratio is %f",ratio);
}
else
{
 printf("ratio cannot be computed");
}

}