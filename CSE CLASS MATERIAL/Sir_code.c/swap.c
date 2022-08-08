#include<stdio.h>
#include<conio.h>
int swap(int*,int*);
void main()
{
  int a=10; int b=20;
  swap(&a,&b);
  printf("\n a=%d b=%d",a,b);
  getch();
}
int swap(int *x ,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}