#include<stdio.h>
#include<stdlib.h>

int main()
{   FILE *fp,*fo;
    char str[50],rs[50],c;
    int i=0, j, chk;

    fp=fopen("finput.txt","w");

       printf("Enter a String: ");
       gets(str);
       fprintf(fp," %s",str);

        fclose(fp);

         fp=fopen("finput.txt","r");

         fo=fopen("fuotput.txt","w");

      
       
    while((c=fgetc(fp))!=EOF)
    {
       
        if(c!='a'&&c!='e'&&c!='i'&&c!='o'&&c!='u'&&c!='A'&&c!='E'&&c!='I'&&c!='O'&&c!='U')
        {
                fputc(c,fo);
                printf("%c", c);
        }
    
           
    }

    
    fclose(fp);

    fclose(fo);

     fo=fopen("fuotput.txt","r");

    printf("\nString (without vowels):");
     fgets(rs,20,fp);
 
    printf("%s", rs);

    fclose(fo);

    return 0;
}