/*Prepared by: Miss Buchanan - October 28, 2025 - Strings - strcmp - Login System*/
#include <stdio.h>
#include <string.h>
char password [] = "password123";
char username [] = "admin";
char userName[6];
char passWord[12];
int main()
{
     while (1)
     {
          printf("Please enter username:");
          scanf(" %s", userName);
          
          printf("Please enter password:");
          scanf(" %s", passWord);
    
         if(strcmp(userName,username ) == 0 && strcmp (password,passWord ) == 0){
              printf("\nLogin Successful");
         }
              else if(strcmp(userName,username ) !=0 && strcmp (password,passWord ) == 0){
                   printf("\nUsername Wrong");
                   printf("\nLogin Unsuccessful");
               }
              else if(strcmp (passWord,passWord ) !=0 && strcmp (userName,username ) == 0 ){
                   printf("\nPassword Wrong");
                   printf("\nLogin Unsuccessful");
              }
              
         else{
              printf("\n*****\n");
              printf("Credentials Wrong ");
              printf("\nCannot login\n\n");
              
         }
          
     }

    

    return 0;
}