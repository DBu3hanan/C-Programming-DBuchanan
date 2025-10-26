/*
    Prepared by: Miss Buchanan
    October 24, 2025: 6:24PM
    Linear Search - Detailed
*/
#include <stdio.h>
int array [] = {6,34,90,2,12}; //initalize array
int key; //declare key for user to use to search
int found = 0; // initalize found so it can be incremented when a key is found
int n = 5; //initalize n for controlling the for loop
int main() 
{
    printf("Enter number to search:");
    scanf("%d", &key); //ask user for key
    
    for(int i = 0; i < n; i++){
        if(array[i] == key){ //if the element at that position is the same as the key
            printf("%d found!", key);
            printf("\nElement found at %d", i);
            found = 1; //when key is found make found = 1, so that the varible can be positive
            break; // break is used to stop the loop because sometimes it's not necessary to search the whole array
        }
    }
    
    if(!found){ //when key is not found, the varible is negative
        printf("Element not found!");
    }

    return 0;
}