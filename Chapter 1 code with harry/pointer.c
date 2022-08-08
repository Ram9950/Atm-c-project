#include<stdio.h>
void main(){
int a=10,b=9,c;
int *p ,*q;
p=(&b,&a);

            //Here p having address of "a" and address of "b" but but finally jo address hai vahi 
// address p ka hoga

// p=&a;
// q=&b;
// c=*p;
// printf("value of a is %d\n",a);   //
// printf("value of b is %d\n",b);
// printf("value of b is %d\n",*q);
// printf("address of a is %x\n",&a);   // Here %x is used for hexadecimal format of identifiers.
printf("address of a is %x\n",p);
printf("address of a is %x\n",&b);

// printf("address of p is %x\n",&p);
// printf("value of c is %d\n",c);
 printf("value of b is %d\n",b);
printf("value of b is %d\n",*p);







   




}