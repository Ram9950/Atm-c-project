#include<stdio.h>
 int sum(int,int,int,int,int);
 float average(int,int,int,int,int);
 int main()
 {
     int num1,num2,num3,num4,num5;
     printf("enter five integer numbers\n");
     scanf("%d%d%d%d%d%d",&num1,&num2,&num3,&num4,&num5);
     sum(num1,num2,num3,num4,num5)
     printf("sum=%d\n",sum(num1,num2,num3,num4,num5));

 }
 