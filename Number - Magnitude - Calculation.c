/*
     Write a c program that allows a user to enter three numbers. 
     The program should determine which number is the middle one in terms of magnitude. 
     The multiply the middle number by the highest number and then divide it by the smallest number the user entered. 
     The user should not be able to enter 0. 
     The program should also use a counter in its output statements to notify the user which number they are entering. 
     At the end of the program. 
     The program should output the numbers the user entered, which numbers are the highest and lowest and middle
     the calculated number and an end of program message. 
     Each output should be on a different line

     Miss Buchanan 
     October 25,2025

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
     int num1,num2,num3;
     int counter = 1;
     int highest = 0, mid =0, lowest =0, calculation = 0;
     
     printf("Enter number %d: ",counter);
     scanf("%d", &num1);
     counter++;
     
     if(num1 == 0){
          printf("Cannot enter 0");
          exit(1);
     }
     
     printf("Enter number %d: ",counter);
     scanf("%d", &num2);
     counter++;
     
     if(num2 == 0){
          printf("Cannot enter 0");
          exit(1);
     }
     
     printf("Enter number %d: ",counter);
     scanf("%d", &num3);
     counter++;
     
     if(num3 == 0){
          printf("Cannot enter 0");
          exit(1);
     }
     

        
   if(num1 > num2 && num1 > num3){
          highest = num1;
          
          if(num2 > num3){
               mid = num2;
               lowest = num3;
          }
     }
     else if(num2 > num1 && num2 > num3){
          highest = num2;
          
          if(num1 > num3){
               mid = num1;
               lowest = num3;
          }
     }
     else{
          highest = num3;
          if(num1 > num2){
               mid = num1;
               lowest = num2;
          }

     }\
     calculation = highest*mid / lowest;
  
     printf("\n%d is the highest", highest);
     printf("\n%d is the middle number", mid);
     printf("\n%d is the lowest number", lowest);
     printf("\nCalculated number is: %d", calculation);
     printf("\nEnd of Program");
     
     
    return 0;
}