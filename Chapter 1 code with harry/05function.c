#include<stdio.h>
// sum is a function which takes a and b as input and returns and 
//integer as an output.
int sum(int a ,int b);  //Function prototype declaration

     
int main()
{
    int ravi;
    ravi =sum(12,5);  ///Function call
    printf("The value of c is %d\n",ravi);

    return 0;

}
int sum(int a,int b){
    int result;
     result=a+b;
     
     return result;
}
     
