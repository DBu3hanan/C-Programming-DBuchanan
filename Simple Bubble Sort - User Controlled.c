/*
     Prepared by: Miss Buchanan
     October 20, 2025
     Simple Bubble Sort - User Controlled
*/

#include <stdio.h>
#define MAX 5
int i, j, temp;
int array[MAX];
int n = MAX;
int main()
{
    printf("Enter the numbers you wish to add:");
    
    for(i = 0; i < n; i++){
         scanf("%d", &array[i]);
    }
    
    
    for(i= 0; i < n-1; i++){
         for (j = 0; j < n - i - 1; j++){
              if(array[j] > array[j + 1]){
                    temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;
              }
              
         }
    }
    
    
    printf("Sorted Array:");
    for(i = 0; i < n; i++){
         printf("%d ", array[i]);
    }
    
    

    return 0;
}