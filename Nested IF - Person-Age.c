// Prepared by: Miss Diamond Buchanan
// Sept 2025
#include <stdio.h>
int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 13) {
        printf("You are a child.\n");
    } else if (age <= 19) {   // teenager
        if (age <= 15) {
            printf("You are a young teenager.\n");
        } else {
            printf("You are an older teenager.\n");
        }
    } 
    else {   // 20 or older
        printf("You are an adult.\n");
    }

    return 0;
}
