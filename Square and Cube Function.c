//Prepared by: Miss D Buchanan - November 30, 2025
#include <stdio.h>
int num1;

int square(int num){
    return num*num;
}

int cube (int num){
    return num*num*num;
}


int main()
{
    do{
        printf("\nEnter number:");
        scanf("%d",&num1);
        
        if(num1 == 0){
            printf("\nCannot add 0");
            printf("\nProgram End");
            break;
        }else{
            printf("Square: %d", square(num1));  
            printf("\nCube: %d", cube(num1)); 
            printf("\n");
        }
        
        
    }while(num1 != 0);
    

    return 0;
}
