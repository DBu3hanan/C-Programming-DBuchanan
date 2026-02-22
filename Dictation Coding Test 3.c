//Prepared by: Miss D Buchanan - November 22, 2025 - Coding test
#include <stdio.h>
#define LIMIT 4
int Total = 1, Errors;
int main()
{
    int Value = 0, Num;
    printf("\nEnter 0 to stop");
    
    do{
          printf("\nEnter a Number:");
          scanf("%d", &Num);
          Value++;
          
          printf("\nValue is %d", Value);
          printf("\nLimit is %d", LIMIT);
          
          Total *= Num;
          Errors += Value;
          
          printf("\n");
          
          printf("\nTotal is %d", Total);
          printf("\nErrors is %d", Errors);
          
          printf("\n");
          
    }while(Num != 0 && Value < LIMIT);

     printf("\nTotal + Errors is %d", Total + Errors);
     
     printf("\nEnd of Program");
   
    return 0;
}