#include<stdio.h>

void fun(int,int);  //Function declaration OR Function prototype

void main(){
    int x=5,y=7;
    fun(x,y);      // Callling of Function.
    printf("inside main (calling function)\n");
    printf("x=%d ,y=%d",x,y);

}
void fun(int x,int y)     // Function Definition
{

    x =7;
     y=5;
     printf("inside fun (called function)\n");
     printf("x=%d,y=%d\n",x,y);


}
