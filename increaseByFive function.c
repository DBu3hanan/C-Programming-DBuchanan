/******************************************************************************
Prepared by: Miss D Buchanan - November 28, 2025
Write a C function that asks the user to enter a starting number, then repeatedly adds five to that number and prints the new value each time. 
The program must continue this process until the value becomes greater than or equal to one hundred. 
While the loop runs, the program should also count how many times the value was increased and keep track of the highest value reached before stopping.
When the program ends, it should display the number of increments performed and the final value.

*******************************************************************************/
#include <stdio.h>
int num1, counter =1, total = 0, largest = 0;
void increaseByFive(){
     do{
          printf("\n");
          printf("\nEnter a number:");
          scanf("%d", &num1);
          
          int num2 = num1 + 5;
          total += num2;
          
          if(num1 > largest){
               largest = num1;
          }
          
          printf("\nNumber entered + 5 is %d", num2); 
          printf("\nThe largest number entered is %d", largest); 
       
          counter++;
          
     }while (total <= 100);
     
     printf("\n");
     printf("\nTotal is %d", total); 
     printf("\nThe program incremented %d times", counter);
     
}

int main()
{
    increaseByFive();

    return 0;
}