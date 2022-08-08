#include<stdio.h.>
int main ()
{
    int a[]={ 1,2,3,4,5,345,3231,33,67};
    int len=sizeof(a)/sizeof(a[0]);
    printf("%d\n",len);
    printf("%d\n",sizeof(a));
    printf("%d",sizeof(a[0]));

}