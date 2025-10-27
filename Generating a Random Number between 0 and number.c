/*
     Miss Buchanan
     October 27, 2025
     Generating a Random Number between 0 and number
*/
#include <stdio.h>
#include <stdlib.h> //add these two header files
#include <time.h>

int main()
{
     //srand means seeded random. You neeed this so that everytime You
     // run the program it generates a different number. NULL
     //can be replaced with 0
     srand(time(NULL)); 
     
     // use the modulus operator to give the program an upper limit range.
     //You have to save the number generated inside a variable
     int rNumber = rand() % 15; //random number between 0 and 15
     
     //printf the number stored in the variable
     printf("%d", rNumber);
     
    return 0;
}
