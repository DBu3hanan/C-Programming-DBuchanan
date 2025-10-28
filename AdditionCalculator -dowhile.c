//Prepared by: Miss Diamond Buchanan
//October 4, 2025
#include <stdio.h> 
int main()
{
    int total = 0, counter = 0;
    int num;
    printf("\t Addition Calculator\n"); //Code Output Heading for User
    do{
         printf("\nPress 0 to stop\n"); //telling user the sentinel value
         printf("Enter the number you wish to add:"); 
         scanf("%d", &num);
         
         if(num != 0){ // this is to ensure that the code doesnt count the sentinel value as well in the final tally
          total = total + num;
          counter++;
         }
         
    }while (num != 0);
    
    printf("\nProgram End");
    printf("\nEnd result: %d\n", total);
    printf("Numbers added: %d", counter);

    return 0;
}



