#include<stdio.h>
#include<string.h>

int main()
{
char str1[200],str2[200],*p,*q;
printf("enter 1st string :\n");
gets(str1);
printf("enter 2nd  string :\n");
gets(str2);
p=str1,q=str2;
while(*p!='\0')
{
    p++;
}
while(*q!='\0')
{
    *p=*q;
    q++;
    p++;

}
    *p='\0';
printf("concatenated string is %s :\n",str1);
return 0;
}