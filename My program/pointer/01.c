#include<stdio.h>
int main()

{
    //int x=10;
    //int *ptr;
    //ptr=&x;
  // * ptr=4;             /* we change the value of object pointed by a pointer.*/
    //printf("%d",*ptr);
int i=10,j=20;
int *p,*q;
p=&i;
q=&j;
*q=*p;
printf("%d %d",*p,*q);
    
}



    

