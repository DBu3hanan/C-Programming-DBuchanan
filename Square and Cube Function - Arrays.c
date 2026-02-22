//Prepared by: Miss D Buchanan - November 30, 2025
#include <stdio.h>
#include <stdlib.h>
int num1, counter = 0;

int square(int num){
    return num*num;
}

int cube (int num){
    return num*num*num;
}

int history[] = {};
int main()
{
    do{
        printf("\nEnter number:");
        scanf("%d",&num1);
        
        if(num1 == 0){
            system("clear");
            // printf("\nCannot add 0");
            printf("\nProgram End");
            break;
        }else{
            printf("Square: %d", square(num1));  
            printf("\nCube: %d", cube(num1)); 

            history[counter] = cube(num1);
            counter++;
            history[counter] = square(num1);
            counter++;
            history[counter] = num1;

            printf("\n");
        }
        
        
    }while(num1 != 0);
    
    printf("\nHistory:");
    for(int i = counter; i >= 0; i--){
        printf("|%d|", history[i]);
    }

    return 0;
}
