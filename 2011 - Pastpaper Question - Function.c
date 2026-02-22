/******************************************************************************
     2011 - Pastpaper Question - Function
     Write a C function which accepts an integer array and an integer variable indicating the
     size of the array. The function should return the sum of all the numbers in the array that
     are NOT greater than 100. 
     
     Prepared by: Miss D Buchanan - November 25, 2025

*******************************************************************************/
#include <stdio.h>
int arrays[] = {1,2,3,4};

int sizeofarray(int array[], int num){
     int total = 0;
     
     for(int i = 0; i < num; i++){
          if(array[i] < 100){
               total += array[i];
          }
     }
     
     printf("Total is: %d", total);
     return total;
}

int main()
{
    sizeofarray(arrays, 4);

    return 0;
}