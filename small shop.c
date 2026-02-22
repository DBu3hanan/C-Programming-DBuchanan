/*   Prepared by: Miss D Buchanan - November 22, 2025
     Write a C program that helps a small shop determine whether a customer qualifies for a discount. The program should use at least two us
     -defined functions. One function should collect and return the total purchase amount entered by the user. Another function should take that
     amount and determine whether the customer receives a discount based on the following rule: if the amount is greater than 15000, the custome
     gets a 10 percent discount. Otherwise, no discount is applied. The program should then print the final amount the customer must pay. 
*/

#include <stdio.h>
#include <stdlib.h>
int purchaseAmount;
int finalBalance;
 
int totalpurchase(){
     printf("Enter purchase amount:");
     scanf("%d", &purchaseAmount);
     return purchaseAmount;
}

int calculateDiscount(int purchaseAmount){
     if(purchaseAmount  > 15000){
          printf("\nDiscount of 10%% applies");
          
          finalBalance = purchaseAmount * .90;
          printf("\nYour final balance is %d",finalBalance );
          printf("\nEnd of program\n");
     }else{
          printf("\nNo Discount");
          printf("\nEnd of program\n");
     }
     
     
}

int main()
{
     int choice;
     while (1){
     
          printf("\n1. Discount Calculation");
          printf("\n2. Exit");
          printf("\nEnter Choice:");
          scanf("%d", &choice);
          
          if(choice == 1){
               totalpurchase();
               calculateDiscount(purchaseAmount);
               printf("Clear Console?\n1.Yes\n2.No\nChoice:");
               scanf("%d", &choice);
               if(choice == 1){
                    system("clear");
               }
               
          }else if(choice == 2){
               system("exit");
               printf("\nEnd of program\n");
               break;
          }else{
               printf("Invalid Selection");
               system("clear");
          }
     }

    return 0;
}