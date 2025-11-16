//Prepared by: Miss D Buchanan - November 16, 2025 - Bubble Sort Functions - Asc&Desc
#include <stdio.h>
void bubbleSort(int array[], int n){
     for(int i = 0; i <n-1; i++){
          for(int j = 0; j < n - i - 1; j++){
               if(array[j] > array[j+1]){
                    int temp =array[j];
                    array[j] = array[j+1];
                    array[j+1] = temp;
               }
          }
     }
     
     printf("The Ascending Sorted Array:");
     for(int i = 0; i < n; i++){
          printf("|%d|", array[i]);
     }
}

void bubbleSortReverse(int array[], int n){
     for(int i = 0; i <n-1; i++){
          for(int j = 0; j < n - i - 1; j++){
               if(array[j] < array[j+1]){
                    int temp =array[j];
                    array[j] = array[j+1];
                    array[j+1] = temp;
               }
          }
     }
     
     printf("\nThe Descending Sorted Array:");
     for(int i = 0; i < n; i++){
          printf("|%d|", array[i]);
     }
}



int main()
{
     int a [] = {45,67,32,21,7};
     bubbleSort(a,5);
     bubbleSortReverse(a,5);

    return 0;
}