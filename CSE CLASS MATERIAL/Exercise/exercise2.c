/* Q.2 Write a C program to swap content of two charactes 
Example:intial value char1='A' and char2='B'
final value char1='B' and char 2='A'*/




#include<stdio.h>
int main(){
    char char1='A', char2='B', temp;
    printf("intial char1=%c and char2=%c\n",char1,char2);

    temp=char1;
    char1=char2;
    char2=temp;

    printf("final char1=%c and char2=%c\n",char1,char2);
    return 0;



}
    

    

   



