#include<stdio.h>
/* the main differnce in "union " and "structure " is only that union have less amount of 
memory compare to struct so when we need to store only some varible outof them in
memory then it is very useful  to use of Union*/
union student
{
int a;
char b;               
float c;
};
int main()
{
    
union student s;
s.a=1;
s.b=2;
s.c=34;
printf("%d\n",s.a);
printf("%c\n",s.b);

printf("%f\n",s.c);

}