#include <stdio.h>
void main()
{
    int a;      
    scanf("%d", &a);
    // while(a<100)
    
    while (a > 10)    //it gives you infinite loop when we input a number >10
    {                  //if a<10 then it prints only 0 t0 9 
        printf("%d\n", a);
        a++;
    }
}