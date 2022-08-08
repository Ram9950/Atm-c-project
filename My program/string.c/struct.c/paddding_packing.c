//  using padding when nothing done compiler give output using padding.
 /* #include<stdio.h>
struct student
{
int a;   
char b;   

};
int main()
{ 
    
struct student s;
printf("%d",sizeof(s));
} */
// without padding or we can say that structure packing.
#include<stdio.h>
# pragma pack(1)
struct student
{
int a;    //int 4 bytes
char b;    // char 1 bytes

};
int main()
{ 
    
struct student s;
printf("%d",sizeof(s));
}