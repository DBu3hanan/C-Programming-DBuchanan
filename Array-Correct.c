#include <stdio.h>

int main() {
    int num1;
    int arr[100]; 

    printf("What is the size of the array: ");
    scanf("%d", &num1);

    for (int i = 0; i < num1; i++) {
        printf("Add Number to Array: ");
        scanf("%d", &arr[i]);
    }

    printf("You entered:\n");
    for (int i = 0; i < num1; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
