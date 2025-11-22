//Prepared by: Miss D Buchanan - November 22, 2025 - Do while - Integer function
#include <stdio.h>
#define LIMIT 4
int Total = 1, Errors;

int addition(int num1, int num2){
     printf("\nThe result is %d", num1 + num2);
     return num1+num2;
}

int main()
{
    int Value = 0, num;
    printf("\nEnter 0 to stop");
    
    do{
          printf("\nEnter a number:");
          scanf("%d", &num);
          Value++;
          
          printf("\nValue is %d", Value);
          printf("\nLimit is %d", LIMIT);
          
          Total *= num;
          Errors += Value;
          
          printf("\n");
          
          printf("\nTotal is %d", Total);
          printf("\nErrors is %d", Errors);
          
          printf("\n");
          
    }while(num != 0 && Value < LIMIT);

     addition(Total, Errors);
     
     printf("\nEnd of Program");
   
    return 0;
}