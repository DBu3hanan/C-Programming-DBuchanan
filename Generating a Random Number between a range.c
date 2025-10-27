/*
     Miss Buchanan
     October 27, 2025
     Generating a Random Number between a range
*/
#include <stdio.h>
#include <stdlib.h> //add these two header files
#include <time.h>

int main()
{
     
     srand(time(NULL)); 
     int upper = 40, lower = 20;
     int rNumber = (rand() % (upper-lower+1)) + lower; //random number between ranges
     
     //printf the number stored in the variable
     printf("%d", rNumber);
     
    return 0;
}
