/*
     Prepared by: Miss Buchanan
     October 20, 2025
     Simple Bubble Sort - Reverse Order
*/

#include <stdio.h>
int array [5] = {100,110,12,55,95};
int i, j, temp;
int n = 5;

int main()
{
     
    for (i = 0; i < n - 1; i++){
         for(j = 0; j < n - i - 1; j++){
              if(array[j] < array[j +1]){
                   temp = array[j];
                   array[j] = array[j +1];
                   array[j +1] = temp;
              }
         }
    }
    
    for(i = 0; i < n; i++){
         printf("%d ", array[i]);
    }

    return 0;
}
