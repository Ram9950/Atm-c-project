#include<stdio.h>
void main()
{
    // int a=12;
    // int *p;
    // p=&a;
    // printf("The address is %x\n",&p);
    // printf("The address is %u\n",*(&a));
    // printf("The address is %p\n",&p);
    // printf("The address is %d\n",&p);
int a[2][2],i,j;
printf("enter the elments of array\n");

for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
    printf("a[%d][%d]=",i,j);

    scanf("%d",&a[i][j]);
}}
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
    printf("%d\t",a[i][j]);

}
printf("\n");


}
}