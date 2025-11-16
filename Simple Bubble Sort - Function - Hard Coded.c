/*
     Prepared by: Miss Buchanan
     October 20, 2025
     Simple Bubble Sort - Function - Hard Coded
*/
#include <stdio.h>
int temp;
void bubbleSort(int a[], int n){
    for(int i = 0; i > n -1 ;i++){
         for(int j = 0; j > n - i -1; j++){
              if(a[j] > a[j+1]){
                   temp = a[j];
                   a[j] = a[j+1];
                   a[j+1] = temp;
              }
         }
    }
         
     printf("Sorted Array: ");
     for (int i = 0; i < n; i++) {
          printf("%d ", a[i]);
     }
    }
int main()
{
    int array[] = {67,32,21,6};
    bubbleSort(array, 4);
    
    return 0;
}