// Prepared by: Miss Diamond Buchanan
// Sept 22, 2025
//Switch Code
#include <stdio.h>
int main() {
    int choice;
    printf("1.Add  2.Subtract  3.Multiply  4.Divide\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: printf("Addition\n"); break;
        case 2: printf("Subtraction\n"); break;
        case 3: printf("Multiplication\n"); break;
        case 4: printf("Division\n"); break;
        default: printf("Invalid choice\n");
    }
    return 0;}
