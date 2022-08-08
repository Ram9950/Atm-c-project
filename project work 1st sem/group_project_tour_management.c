//PRESENTED BY GROUP 2
                                        
                                     // TOUR MANAGEMENT SYSTEM   
                     
                            //UNDER THE GUIDANCE OF Mr.GAURAV MALODE SIR 
   
#include <stdio.h>
#include <stdlib.h>
int guide(int);
int readFile();
struct details
{
    char name[30];
    char gender[10];
    int age;
};
 
int main()
{
    FILE *fptr;
    fptr=fopen("student.txt","a");
   //fptr = (fopen("D:\\Programming\\student.txt", "a"));
   if(fptr == NULL)
   {
       printf("Error!");
       exit(1);
   }
   
   int i, a, c, k, t, choice, det, india(), inter(), discount();
    float d;
    char val[20], gen[6];

    int count = 0;
    float expenses = 0.0f;

    i = 0;

    printf("\n\t<<<<<<<<<<<<<<<<<<<<TOUR MANAGEMENT SYSTEM>>>>>>>>>>>>>>>>>>>\n\n\n");

    struct details tourist[100];
    printf("Enter the number of tourists :\n");
    scanf("%d", &t);
    printf("Enter tourist detail :\n\n");
    for (i = 0; i < t; i++)
    {

        printf(" Touristname : age  :gender", i + 1);
        fprintf(fptr,"\nInformation of tourist::");

        scanf("%s %d %s", tourist[i].name, &tourist[i].age, tourist[i].gender);
       
      
    }
    
   
   for(i=0;i<t;i++)
{
    printf("\n Tourist Name :%s \t age :%d \t gender :%s",tourist[i].name,tourist[i].age,tourist[i].gender);
    fprintf(fptr,"\nTourist Name :%s \t age :%d \t gender :%s \n", tourist[i].name,tourist[i].age,tourist[i].gender);
    
}

   printf("\n\nEnter your choice of Tour destination package \n");
   printf("1.India tour packages \t 2.International package\n");

   scanf("%d", &choice);
   switch (choice)
   {
   case 1:
      expenses = india();
      fprintf(fptr,"\nThe choice is India", expenses);
      break;
   case 2:
      expenses = inter();
      fprintf(fptr,"\nThe choice is International", expenses);
      break;

   default:
      printf("you choose a wrong choice.....");
      exit(choice);
   }

   printf("\nDiscount offers available are as follows:-\n\n");
   printf("if tour lasts more than 8 days then 15 percent discount\n\n");
   printf("if tour lasts more than 15 days then 20 percent discount\n\n");
   printf("if tour lasts more than 30 days then 25 percent discount\n\n");
   printf("or if the tour is for foreign countries which last more than 30 days then 30 percent discount\n\n");
   printf("Now please input the number of days you wish this tour to last:");
   scanf("%f", &d);
   printf("the cost according to the package you chose : %f", expenses);
   if (choice == 1)
   {
      if (d <= 8)
      {
         printf("The amount to be payed after applying the discount is %f", expenses * d);
         fprintf(fptr,"\nThe amount to be payed after applying the discount is %f", expenses * d);
      }
      else if (8 < d < 15)
      {

         expenses = expenses * 0.85 * d;
         printf("\nThe amount to be payed after applying the discount is %f", expenses);
         fprintf(fptr,"\nThe amount to be payed after applying the discount is %f", expenses );
      }
      else if (15 <= d <= 30)
      {

         expenses = expenses * 0.80 * d;

         printf("\nThe amount to be payed after applying the discount is %f", expenses);
         fprintf(fptr,"\nThe amount to be payed after applying the discount is %f", expenses);
      }
      else if (d > 30)
      {
         expenses = expenses * 0.75 * d;
         printf("\nThe amount to be payed after applying the discount is %f", expenses);
         fprintf(fptr,"\nThe amount to be payed after applying the discount is %f", expenses);
      }
      expenses = expenses + guide(choice);
   }
   else if (choice == 2)
   {
      if (d < 30)
      {
         expenses = expenses * d;
         printf("\nThe amount to be payed after applying the discount is %f", expenses);
         fprintf(fptr,"\nThe amount to be payed after applying the discount is %f", expenses);
      }
      else
      {
         expenses = 0.70 * expenses * d;
         printf("\nThe amount to be payed after applying the discount is %f", 0.70 * expenses);
         fprintf(fptr,"\nThe amount to be payed after applying the discount is %f", expenses);
      }
      expenses = expenses + guide(choice);
   }
   printf("Total Amount to be paid(including the amount of guide) %f ", expenses);
   fprintf(fptr,"\nTotal Amount to be paid(including the amount of guide) %f", expenses);
   printf("--------------------------------------------------");
   printf("\n\n\nThanks for visiting...... Enjoy your Vacation!!!\n");
   return 0;
   fclose(fptr);
}

int india()
{
   int choice;
//fptr=fopen("india.txt","a");
readFile("india.txt");
   //readFile("D:\\Programming\\india.txt");
   printf("\n\n1.Shimla tour package\t 2.Kashmir tour package\n3.Mount abu tour\t 4.Goa tour\n");
   printf("\n\nEnter tour choice in india\n");
   scanf("%d", &choice);

   switch (choice)
   {

   case 1:
      printf(" The total price including food,hotel and travelling cost for one day, price=25000/person\n\n");
      return 25000;
      break;
   case 2:
      printf("The total price including food,hotel and travelling cost for one day, price=35500/person");
      return 35500;
      break;
   case 3:
      printf("The total price including food,hotel and travelling cost for one day, price=25000/person");
      return 25000;
      break;
   case 4:
      printf("The total price including food,hotel and travelling cost for one day, price=1000/person");
      return 10000;
      break;
   default:
      printf("There is no many more trip option");
   }
   return 0;
 
}
int inter()
{
   
   
   int choice;
    readFile("inter.txt");
  // readFile("D:\\Programming\\inter.txt");
   printf("\n1.Thailand Packages\t 2. Mauritius Tour Package\n 3.Dubai Packages\t 4.Singapore Packages\n");

   printf("\nEnter international tour choice place\n");
   scanf("%d", &choice);

   switch (choice)

   {
   case 1:
      printf("The total price including food,hotel and travelling cost for one day, price=75000/person");
      //fprintf(fptr,"\nThe total price including food,hotel and travelling cost for one day, price=75000/person");
      return 75000;
      break;
   case 2:
      printf("The total price including food,hotel and travelling cost for one day, price=75000/person");
      //fprintf(fptr,"\nThe total price including food,hotel and travelling cost for one day, price=75000/person");
      return 75000;
      break;
   case 3:
      printf("The total price including food,hotel and travelling cost for one day, price=80000/person");
      //fprintf(fptr,"\nThe total price including food,hotel and travelling cost for one day, price=80000/person");
      return 80000;
      break;
   case 4:
      printf("The total price including food,hotel and travelling cost for one day, price=90000/person");
      //fprintf(fptr,"\nThe total price including food,hotel and travelling cost for one day, price=90000/person");
      return 90000;
      break;
   default:
      printf("There is no many more trip option");
   }

   return 0;
}
int guide(int choice)
{
    FILE *fptr;
    fptr=fopen("student.txt","a");
   //fptr = (fopen("D:\\Programming\\student.txt", "a"));
   if(fptr == NULL)
   {
       printf("Error!");
       exit(1);
   }
   if (choice == 1)
   {
      printf("\n\nGuide of information for India tour\n\n");
      printf("------------------------------------\n\n");
     
      printf("Charges of guide is 500/days\n");

      int days;
      printf("Enter number of days :: ");
      scanf("%d", &days);
      fprintf(fptr,"\nThe number of days you want guide is :: %d",  days);
      int guide_fee;
      guide_fee = 500 * days;
      printf("Payment for guide is :: %d\n", guide_fee);
      fprintf(fptr,"\nPayment for guide is :: %d\n",  guide_fee);
      fprintf(fptr,"-------------------------------------------\n");
      printf("-------------------------------------------\n");
      fprintf(fptr,"Thanks for visiting!!!!!!\n");
      return guide_fee;
   }
   else
   {
      printf("\nInformation of guide for outside India tour\n\n");
      printf("------------------------------------\n\n");
      printf("\nCharges of guide is 2000/days\n");

      int days;
      printf("Enter number of days :: ");
      scanf("%d", &days);
      fprintf(fptr,"\nThe number of days you want guide is :: %d",  days);
      int guide_fee;
      guide_fee = 2000 * days;
      printf("Payment for guide is :: %d", guide_fee);
      fprintf(fptr,"\nPayment for guide is :: %d\n",  guide_fee);
      fprintf(fptr,"-------------------------------------------\n");
      fprintf(fptr,"Thanks for visiting!!!!!!\n");
      printf("-------------------------------------------\n");
      return guide_fee;
   }
}
int readFile(char *fileName)
{
   FILE *ptr;
   char ch;

   ptr = fopen(fileName, "r");

   if (NULL == ptr)
   {
      printf("file can't be opened \n");
   }

   printf(" \n");
   do
   {
      ch = fgetc(ptr);
      printf("%c", ch);
   } while (ch != EOF);

   fclose(ptr);
   return 0;


}