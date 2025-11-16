/*
     Prepared by: Miss Buchanan
     October 20, 2025
     Simple Bubble Sort - Function - User Coded
*/

#include <stdio.h>

void bubblesort(int array[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    printf("Sorted Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
}

int main() {
    int array[5];
    for (int i = 0; i < 5; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    bubblesort(array, 5);

    return 0;
}
