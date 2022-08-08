#include<stdio.h.>
struct student
{
int rollno;         // Here delaration of rollno=23 cannot be occur beccure here no memoryallocted//
char name[20];
float marks;

}s3={23,34,13};   /******** another way of initilazation.******/


int main()
{
    struct student s1={1,"ravi",68};      // compile time execuation ///
    struct student s2={2,"gupta",78};
    s1=s2;
    printf("info for s1");
    printf("\n%d %s %f\n",s1.rollno,s1.name,s1.marks);
printf("info for s2\n");
    printf("\n%d %s %f\n",s2.rollno,s2.name,s2.marks);
    printf("info for s3\n");
    printf("\n%d %s %f",s3.rollno,s3.name,s3.marks);
    return 0;
}