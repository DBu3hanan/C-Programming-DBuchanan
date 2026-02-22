/*D.Buchanan - 11/05/2025 - Switch Statement*/
#include <stdio.h>
int choice;
int main()
{
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\nPlease enter your choice:");
    scanf("%d", &choice);
    
    switch(choice){
          case 1:{
               int num, total = 0;
               while(num != 0){
                    printf("\n");
                    printf("\nEnter 0 to stop");
                    printf("\nEnter number to be added:");
                    scanf("%d", &num);
                    
                    if(num == 0){
                         break;
                    }else{
                         total += num;
                    }
                    
               }
               
          printf("Total: %d", total);
          break;
          }
          
          
          case 2:{
              int num, total = 0;
               while(num != 0){
                    printf("\n");
                    printf("Enter numbers to be subtracted:");
                    scanf("%d", &num);
                    
                    if(num == 0){
                         break;
                    }else{
                         total -= num;
                    }
                    
               }
               
          printf("Total: %d", total); 
          break; 
          }
           
          
          default:
               printf("Invalid choice");
            break;

    }

    return 0;
}