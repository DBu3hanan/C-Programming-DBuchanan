//Shanelle Harvey & Miss Diamond Buchanan
//October 1, 2025 
//Editied October 2, 2025

#include <stdio.h>
#include <stdio.h>
int main() {
    int studentID, counter; 
    counter = 0;

    do {
        printf("Enter 0 to exit.\n");
        printf("Enter Last Digit of StudentID: ");
        scanf("%d", &studentID);

        if (studentID == 0) {
            printf("Enrollment has been cancelled.\n");
            break;
        }

        counter++;
        printf("Student has been successfully enrolled!\n");
        printf("\nTotal current enrollment: %d\n\n", counter);

        if (counter == 10) {
            printf("This class has reached enrollment capacity.\n");
            break;
        }

    } while (counter < 10);
    
    printf("The amount of students enrolled is: %d", counter);
    printf("\n\nEND");

    return 0;
}
 

