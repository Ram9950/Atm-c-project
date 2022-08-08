#include<stdio.h>
float average(int,int,int);

int main()
{
    int a;
    a= average(x,y,z);
    return 0;

    

}
float average(int a,int b,int c){
    int a,b,c;
     float average;
    printf("Enter the value of a,b,c\n");
    scanf("%d , %d , %d", &a, &b ,&c);
      average =(a+b+c)/3;
     printf("average=%f\n",average);
}



