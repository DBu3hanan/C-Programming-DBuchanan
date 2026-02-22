/*write a c program that creates a file named data, you should write two
sentences to the file on different lines*/

#include <stdio.h>

int main()
{
    FILE *fp;
    char name[20];
    char position[20];
    char companyName[50];
    fp = fopen("data.txt","w");
    
    printf("What is your name?");
    scanf("%s",name);
    printf("What is the name of your company?");
    scanf("%s",companyName);
    printf("What is your position in the company?");
    scanf("%s",position);
    
    fprintf(fp,"\t%s's Document",name);
    fprintf(fp,"\n\nCOMPANY NAME: %s", companyName);
    fprintf(fp,"\nPOSITION: %s",position);
    fclose(fp);

    return 0;
}