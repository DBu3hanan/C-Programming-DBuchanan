//Selection Sort
#include <stdio.h>
int array[] = {89,43,21,90,1};

void SelectionSort(int array[], int n){
    for(int i = 0; i < n - 1; i++){
        int minindex = i;
        
        for(int j = i+1; j < n; j++){
            if(array[j] < array[minindex]){
                minindex = j;
            }
        }
        
        int temp = array[minindex];
        array[minindex] = array[i];
        array[i] = temp;
    }
    
    printf("Sorted array:");
    for(int i = 0; i < n; i++){
        printf(" %d ", array[i]);
    }
}

int main()
{
    SelectionSort(array, 5);

    return 0;
}