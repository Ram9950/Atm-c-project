#include<stdio.h>
void display();    //Function prototype

int main(){
    int a;
    printf("initialize the display function\n");
    display();   //Function call
    printf("display functions finished its works\n");
    return 0;

}

// Function definition
void display(){
printf("This is display\n");
}
