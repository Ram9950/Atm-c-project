#include<stdio.h>
void main()
{
    max(10,30);
}
int max(int a,int b)
{
    int result;
    if(a>b)
    result=a;
    else
    result=b;
    return result;
}
