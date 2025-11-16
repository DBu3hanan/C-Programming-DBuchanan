/* 
     Prepared by: Miss Buchanan
     November 14, 2025
     Using Compound Assignment Operater - +=
*/
#include <stdio.h>
int num, total = 0;
int main()
{
    for(int i = 0; i < 5; i++){
         printf("Enter a number:");
         scanf("%d", &num);
         
         total += num; //Compound Assignment Operater
    }
    
    printf("Total is: %d", total);
    return 0;
}
