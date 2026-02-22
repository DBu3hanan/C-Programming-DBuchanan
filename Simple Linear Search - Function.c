/*
     Prepared by: Miss Buchanan
     December 20, 2025
     Simple Linear Search - Function
*/

#include <stdio.h>
int array [] = {5,9,10,26,8};
int key, found = 0, n = 5;

void linearSearch(int array[], int n);

int main()
{
    linearSearch(array, 5);
    return 0;
}

void linearSearch(int array[], int n){
    printf("Enter the number to search:");
    scanf("%d", &key);
   
     for(int i = 0; i < n; i++){
          if(array[i] == key){
               printf("Element found at position %d", i);
               found = 1;
               break;
          }
     } 

    if(!found){
         printf("Element not found");
    }
}