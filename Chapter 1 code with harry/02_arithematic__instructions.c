#include<stdio.h>
#include<math.h>
int main()
{
    int a =4;
    int b= 8;
    // int z=b*a; //legal
    // int z=a*b; //legal
    int z;z=a*b;
    //legal
    // b*a=z;ilegal
    printf("The value of z is %d\n",z);
    printf("The value of a+b is %d\n",a+b);
    printf("The value of a-b is %d\n",a-b);
    printf("The value of a*b is %d\n",a*b);
    printf("The value of a/b is %d\n",a/b);   
    printf("when 5 is divided by 2 then remainder is %d\n",5%2);
    printf("when -5 is divided by 2 then remainder is %d\n ",-5%2);  //sign is same as numerator so negative 1 is remainder  comes
    printf("when 5 is divided by -2 then remainder is %d\n ",5%-2);  //numearator is positive so positive 1 is remainder
    //NO OPERATOR CAN BE ASSUMED TO PRESENT LIKE AS A.B AND AB
    // printf("%d",ab);//invalid
    printf("%d \n",a*b );//valid
    //THERE IS NO OPERATOR TO PERFORM EXPONINATION IN C LANGUAGE
    printf("The value of 4^5 is %d \n",4^5);  //Will not produce 4 to the power 5 "^" it is a bitwise 'XOR'operator
     printf("The value of 2 to the power 10 is  is %f  \n",pow(2,10));  
     /* For the use of pow we include the math.h library in our function*/
    printf("The value of 5.0/2 is %f\n",5.0/2);   //int and float ka operation give float
    printf("The value of 5/2.0 is %f\n",5/2.0);   //int and float ka operation give float
    printf("The value of 5/2 is %d\n",5/2);   //int and int  ka operation give int


    return 0;






}
