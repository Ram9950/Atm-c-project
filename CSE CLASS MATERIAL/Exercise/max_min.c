#include<stdio.h>
int maximum(int,int,int);
int minimum(int,int,int);

int main()
{
int a,b,c;
printf("Enter three numbers \n");
scanf("%d%d%d", &a,&b,&c);

 maximum( a,b,c);
 printf("max of %d, %d and %d is %d \n",a,b,c,maximum(a,b,c));
 
minimum( a,b,c);
 printf("min of %d, %d and %d is %d \n",a,b,c,minimum(a,b,c));
 

 return 0;
 }
 int maximum(int x,int y,int z)
 {
     if(x>y && x>z)
     return x;
     else if(y>x && y>z)
     return y;
     else
     return z;
 }
int minimum(int x,int y,int z)
 {
     if(x<y && x<z)
     return x;
     else if(y<x && y<z)
     return y;
     else
     return z;
 }
