//Prepared by: Miss Diamond Buchanan
//October 1, 2025
//How to join strings in C
#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
     char firstName[MAX];
     char lastName[MAX];
     
     printf("Enter your first name:");
     fgets(firstName, MAX, stdin);
     
     printf("Enter your last name:");
     fgets(lastName, MAX, stdin);
     
     strcat(firstName, lastName); // Concatenate lastName to firstName
     
     printf("Your name is: %s", firstName); // Output: Both Names
     size_t len = strlen(firstName); // counting the characters in the string
     
     printf("Your name is %zu characters long", len); //outputing to the user how many chars

    return 0;
}
