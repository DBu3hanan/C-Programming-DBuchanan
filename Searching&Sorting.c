//Miss D Buchanan - Jan 26,2026
#include <stdio.h>

//Linear Search
int linearSearch(int array[], int n, int key){
    for(int i = 0; i <n; i++){
        if(array[i] == key){
            printf("\nThe key has been found at position %d", i);
            return i;
        }
    }
    printf("\nThe key has not been found ");
    return -1;
}


//Binary Search
int binarysearch(int array[], int n, int key){
    int low = 0, high = n -1;
    
    while(low <= high){
        int mid = (low + high) / 2;
        
        if(array[mid] == key){
            printf("\nThe key has been found at position %d", mid);
            return mid;
        }else if(key < array[mid]){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    printf("The key has not been found ");
    return -1;
}


//Bubble Sort
void bubbleSort(int array[], int n){
    for(int i = 0; i < n -1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    for(int i = 0; i < n; i++){
        printf(" %d ", array[i]);
    }
    
}


//Selection Sort
void selectionsort(int array[], int n){
    for(int i = 0; i < n -1; i++){
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
    
    for(int i = 0; i < n; i++){
        printf(" %d ", array[i]);
    }
    
}

int main()
{
    int array[] = {90,77,54,21,1};
    selectionsort(array, 5);
    bubbleSort(array, 5);
    
    binarysearch(array, 5, 54);
    linearSearch(array, 5, 54);

    return 0;
}