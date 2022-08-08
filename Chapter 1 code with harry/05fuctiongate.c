#include<stdio.h>
void sum();
void main(){
    sum();
    sum();
    printf("Hello world");
}


void sum(){
    int a,b,c,sum;
    printf("enter three numbers");
    scanf("%d %d %d",&a, &b, &c );
    sum=a+b+c;
    printf("sum=%d",sum);



}


