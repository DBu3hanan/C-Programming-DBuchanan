//Prepared by: Miss D Buchanan - January 1, 2026 - Linear Search and Binary Search Value Returning
#include <stdio.h>

int linsearsearch(int arrayname[], int n, int key){
    int found = 0;
    for(int i = 0; i < n; i++){
        if(arrayname[i] == key){
            printf("The key has found been found at position %d", i);
            found = 1;
            return i;
        }
    }
    
    if(!found){
        printf("The key is not present in the array");
        return -1;
    }
}

int binarysearch (int arrayname[], int n, int key){
    int found = 0;
    int low = 0, high = n -1, mid;
    
    while(low <= high){
        mid = (low + high) / 2;
        
        if(arrayname[mid] == key){
            printf("The key has found been found at position %d", mid);
            found = 1;
            return mid;
        } else if(key < arrayname[mid]){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    
    if(!found){
        printf("The key is not present in the array");
        return -1;
    }
}

int main()
{
    printf("Hello World");

    return 0;
}