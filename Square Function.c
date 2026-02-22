//Prepared by: Miss D Buchanan - November 30, 2025
#include <stdio.h>
int num1;

int square(int num){
    return num*num;
}

int main()
{
    do{
        printf("\nEnter number:");
        scanf("%d",&num1);
        
        if(num1 == 0){
            printf("Cannot add 0");
            break;
        }else{
            printf("Square: %d", square(num1));  
            printf("\n");
        }
        
        
    }while(num1 != 0);
    

    return 0;
}
