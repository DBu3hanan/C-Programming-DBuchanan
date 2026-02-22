#include <stdio.h>
int array[] = {67,43,26,45};

int array2[] = {12,34,56,78,89};
int linearSearch(int array[], int n, int key){
    for(int i = 0; i < n-1; i++){
        if(array[i] == key){
            return i;
        }
    }
    
    return -1;
}

int binarySearch(int array[], int n, int key){
    int low = 0, high = n -1;
    
    while(low <= high){
        int mid = (low + high) / 2;
        
        if(array[mid] == key){
            return mid;
        }else if(key < array[mid]){
            high = mid -1;
        }else{
            low = mid +1;
        }
    }
    
    return -1;
}


void bubbleSort(int array[], int n){
    for (int i = 0; i < n-1; i++){
        for(int j = 0; j < n - i -1; j++){
            if(array[j] < array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    
    printf("\nThe sorted array:");
    
    for(int i = 0; i < n; i++){
        printf("%d", array[i]);
    }
}


void selectionSort(int array[], int n){
    for(int i = 0 ; i < n -1; i++){
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
}

int main()
{
    printf("%d", linearSearch(array, 4, 45));
    printf("%d", binarySearch(array2, 5, 45));
    
 

    return 0;
}