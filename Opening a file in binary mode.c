/*
     Prepared by: Miss D Buchanan
     October 18, 2025
     Opening a file in binary mode
*/
#include <stdio.h>
int main()
{    
    FILE *fptr;
    char firstname [50];
     // Open a file in writing mode
     fptr = fopen("firstname.bin", "wb");
     
     printf("Enter your name: ");
     scanf("%s", &firstname);
     
     // Write some text to the file
     fprintf(fptr, firstname);
     
     // Close the file
     fclose(fptr);

    return 0;
}
