//Prepared by: Miss D Buchanan - Jan 17, 2026
#include <stdio.h>
int array[] = {89,43,21,90};
int main()
{
    for(int i = 0; i <4; i++){
        if(array[i] > 34){
            array[i] = 0;
        }
    
    }
    
    printf("\nArray:");
    for(int i = 0; i <4; i++){
        printf(" %d ", array[i]);
    }
    
    
    return 0;
}