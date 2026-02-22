#include <stdio.h>
#define TEMP 5

int counter = 0;
int main()
{
    int rainCount, dayCount;
    
    printf("Enter number between 0 and 5:");
    scanf("%d", &rainCount);
    
    printf("Enter number between 10 and 15:");
    scanf("%d", &dayCount);
    
    if(rainCount > 0 && rainCount < 6){
        
        if(dayCount > 9 && dayCount < 16){
            
            do{
                
               
                printf("\nThe value of rain count is %d", rainCount);
                printf("\nThe value of day count is: %d", dayCount);
               
                counter++;
                rainCount++;
                dayCount--;
                
                
                
            }while(dayCount < counter || TEMP > counter);
        }
        else{
            printf("Invalid Selection;");
        }
        
    }
    else{
        printf("Invalid Selection;");
    }
    return 0;
}