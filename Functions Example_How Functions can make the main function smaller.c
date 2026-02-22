/*
     Prepared by: Miss D Buchanan
     October 17, 2025
     Functions Example: How Functions can make the main function smaller
*/

#include <stdio.h>

int num, num2, total = 0, counter = 0;

void endmessage(){
     printf("\nProgram ended.\n");
}

void menu(){
     printf("\n1. Enter Numbers\n");
     printf("0. Exit\n");
     printf("Choice: ");
     scanf("%d", &num);
}

void enterNumbers(){
     printf("Enter number to add (-1 to stop): ");
     scanf("%d", &num2);
     
     while(num2 != -1){
          total = total + num2;
          counter++;
          printf("Enter another number (-1 to stop): ");
          scanf("%d", &num2);
     }
     printf("\nTotal of numbers: %d\n", total);
     printf("You entered %d numbers\n", counter);
     
}

int main()
{
     menu();
     
     while(num != 0){
          if(num == 1){
               enterNumbers();
          } else {
               printf("Invalid choice. Try again.\n");
          }
          menu();
     }
     endmessage();
     
     return 0;
}
