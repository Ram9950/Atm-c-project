#include<stdio.h.>
void main ()
{
    char name[30];
    printf("enter name");
    //scanf("%4s",name);    /******* gives only 4 character of outpput*****// ****first 
    /*********prference than last printf*******/
    scanf("%s",name);
    //gets(name);

    //printf("%s",name);
    //printf("%20s",name);    /******* it gives initial space and then print
    //printf("%0.5s",name);     /******** it gives only 5 character*******/
  //  printf("%20s",name);
    /////printf("%5s",name);
    //puts(name);
    printf("%s\n",&name[2]);  /***it gives output excliduing intial two char after two character***/
    printf("%s\n",&name);    /*************line 18 and 19 give same output*****/
    printf("%s\n",name);
    printf("%s\n",name[2]);  //// NO OUTPUT/////

    



}