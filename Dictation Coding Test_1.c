//Prepared by: Miss D Buchanan - November 16, 2025
#include <stdio.h>
#define SIZE 10
int Temp = 5;
int main()
{
     int Num;
     printf("Enter a random Number:");
     scanf("%d", &Num);
    
     if(Num < 10){
          printf("The number must be greater than 10");
     }else{
          for(int i = 0; i <= Num; i++){
              printf("\n%d", i);
          }
     }
    
    printf("\nMacro: %d", SIZE);
    printf("\nTemp + Size: %d", Temp+SIZE);

    return 0;
}