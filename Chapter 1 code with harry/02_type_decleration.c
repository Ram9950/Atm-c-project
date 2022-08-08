#include<stdio.h>
int main(){
    // int a=90, b,c; //Type declaration istructions
    // b=c=a; //Type declarations instructions
    // a=b=c; //But this is not execute why?

    // printf("the value of a is %d \n",a);
    // printf("the value of b is %d\n",b);
    // printf("the value of c is %d\n",c);
    float a =1.1; 
    float b= a + 3.4;
    /*if first we write float b=a+3.4
    then float a=1.1
    then this code can't execute becoz compiler first execute first code then other*/
    printf("The value  of b  is %f\n",b);



    



    return 0;
    }

