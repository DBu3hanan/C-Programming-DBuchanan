//Prepared by: Miss Diamond Buchanan
//October 4, 2025
//Introduction to Functions
#include <stdio.h>
int num1, num2, value;
int addition(int a, int b); //function prototype
int main() {
     
     printf("Enter the numbers you want to add:");
     scanf("%d %d", &num1, &num2);
     
     value = addition(num1, num2);
     printf("result = %d", value);
    
    return 0;
}
int addition (int a, int b){ //function definition
     return a + b;
}



