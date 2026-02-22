//Prepared by: Miss D Buchanan - January 1, 2026 - Linear Search and Binary Search Version II
#include <stdio.h>

int linearsearch(int arrayname[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arrayname[i] == key) {
            printf("The key was found at position %d\n", i);
            return i;
        }
    }
    printf("The key is not present in the array\n");
    return -1;
}

int binarysearch(int arrayname[], int n, int key) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arrayname[mid] == key) {
            printf("The key was found at position %d\n", mid);
            return mid;
        } 
        else if (key < arrayname[mid]) {
            high = mid - 1;
        } 
        else {
            low = mid + 1;
        }
    }

    printf("The key is not present in the array\n");
    return -1;
}


int main(){
    return 0;
}