/******************************************************************************
Prepared by: Miss D Buchanan - November 28, 2025
Write a C function to find the cube of a given number.
*******************************************************************************/
#include <stdio.h>
float num;

float cubed(){
     
     printf("Enter Number:");
     scanf("%f", &num);
     
     float cubed = num * num * num;
     
     printf("Cubed of %.2f is %.2f", num, cubed);
     
     return cubed;
     
}

int main()
{
    cubed();

    return 0;
}