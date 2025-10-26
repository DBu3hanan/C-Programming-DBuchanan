/*
     Prepared by: Miss Buchanan
     October 20, 2025
     Simple Bubble Sort - Hard Coded
*/

#include <stdio.h>
int main()
{
     int array [] = {7,29,5,4,3,20,1};
     
    int i, j, temp, n=7;
    
    for (i = 0; i < n - 1; i++){
         for(j = 0; j < n -i - 1; j++){
              if (array[j] > array[j + 1]){
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
