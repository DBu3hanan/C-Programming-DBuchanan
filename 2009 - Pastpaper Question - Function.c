/******************************************************************************
     2009 - Pastpaper Question - Function
     Write a C function which accepts two integer parameters, a and b, and 
     returns the larger of the two. Assume the integers are different.
     
     Prepared by: Miss D Buchanan - November 25, 2025

*******************************************************************************/

#include <stdio.h>

int larger(int a, int b){
     int larger;
     if(a > b){
          larger = a;
          printf("The larger number is %d", a);
     }else if(b > a){
          printf("The larger number is %d", b);
          larger = b;
     }else{
          printf("Invalid Entry");
     }
     
     return larger;
}

int main()
{
    larger(78, 12);

    return 0;
}