#include<stdio.h>
#include<windows.h>
#include<conio.h>

int main()
{ 
    system("color 3F");      // 3F  color is aqua blue
    long int cw,cd,balance=1000,new_balance,rem_balance;
    int choice,i,av=0;        // av for activation
    long int pin;
    char cont='Y';
    //clrscr();
    while(pin !=12345)
    {
        
        printf("Enter your pin :\n");
        scanf("%ld",&pin);
        if(pin != 12345)
        {
            Beep(610,500);      //first argument represent frequecy and other time in milisecond
            printf("\nInvalid pin !!!!!\n");
        }

    }
    //clrscr();
    do
    {
        printf("=================Welcome To ATM Services===============");
        printf("\n 1.Balance Enquiry\t\t 2.Cash Withdraw\n\n 3.Cash Deposit\t\t 4.Quit\n\n");
        printf("********************************************************************");
        printf("\nPlease select a Transition\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                   printf("\nCurrent available balance --: %ld",balance);
                    break;

            case 2:
                   printf("Enter amount that you want to withdraw :");
                   scanf("%ld",&cw);
              if(cw %100!=0)
              {
                printf("cash withdraw should be multiple of 100");
                break;
              }
                   
            
            if(cw>balance)
            {
                printf("Insufficient Fund .......\n");

            }
            else
            {
                rem_balance=(balance-cw);
                
            printf("cash withdrawn successfully\n");
            printf("your remaining balnace is %ld",rem_balance);
                
            }
                break;

            case 3:
                   printf("Enter amount of deposit\n");
                   scanf("%ld",&cd);
                   new_balance=balance+cd;
                   //clrscr();
                   //gotoxy(10,15);
                   printf("Amount successfully deposited\n");
                   printf("Your new balance is %ld:\n",new_balance);
                   break;

            case 4:
                  printf("Thanks for using our services\n ");
                  break;
            default :
                   Beep(610,550);
                  printf("Error! Please selct a right Transition option \n");
        }
        printf("\nDo you want to continue another transitions ?(Y/N)\n");
        fflush(stdin);    // cleans the input buffer bec.'Enter' is also a character
        scanf("%c",&cont);
        if(cont=='N'|| cont=='n')
        {
           av=1;
        }

    }
    while(!av);
    {
        printf("Welcome");
        
    }
     return 0;
 }
    

        
    
    

