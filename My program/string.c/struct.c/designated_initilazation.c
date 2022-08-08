 #include<stdio.h>
struct student
{
int a;   
float b;   // .b=1 i.e b value is 5 and without . first value given to first meber of struct//
int c;

};
int main()
{ 
    
struct student s={.b=1,.c=10,.a=5};
printf("%d %f %d",s.a,s.b,s.c);
}