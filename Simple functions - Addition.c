//Prepared by: Miss Diamond Buchanan
// Ocotober 7, 2025
//Simple functions - Addition
#include <stdio.h>

int addition (int counter); //function prototype

int main()
{
     int num, value;
     
     printf("How many numbers are you adding:");
     scanf("%d", &num);

     value = addition(num); //Calling fucntion
    return 0;
}


int addition (int counter){ //function definition
     int total = 0;
     int number;
     for(int i =0; i < counter; i++)  {
        printf("Enter number:");
        scanf("%d", &number);
        total = total + number;
     }
     
     printf("Total = %d", total);
     
   return 0;
}
