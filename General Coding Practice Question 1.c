// Prepared by: Miss Diamond Buchanan
//October 14, 2025 : 12:58
//General Coding Practice Question 1 
#include <stdio.h>

int main()
{
    int total = 0;
    int counter = 1;
    int tempNum;
    int num;
    
    printf("How many numbers do you wish to average:");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++){
        
        if (num == 0){
            printf("Cannot be 0");
        }
        else{
            printf("Enter number %d to average:", counter );
            scanf("%d", &tempNum);
            
            counter++;
            
            total = total + tempNum;
        }
    }
    
    printf("\nYou entered %d numbers", counter - 1);
    printf("\nThe sum of the numbers added is %d", total);
    printf("\nThe average of the numbers added is %d", total / counter);
    printf("\n\nProgram has ended");

    return 0;
}