//Prepared by: Miss Diamond Buchanan
//October 5, 2025
//Using sizeof operater to print the size of data types
#include <stdio.h>
int main() {
    int myInt;
    int calculate = 6;
    double myDouble;
    float grade;
    char myChar;
    
    //%zu is used for the sizeof operator

    printf("Size of int: %zu bytes\n", sizeof(myInt));
    printf("Size of calculate: %zu bytes\n", sizeof(calculate));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(myDouble));
    printf("Size of char: %zu bytes\n", sizeof(myChar));

    return 0;
}