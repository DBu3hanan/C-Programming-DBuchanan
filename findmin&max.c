
#include <stdio.h>
int array[]={89,51,37,2};

void findmin(int array[]){
    int min;
    for(int i = 0; i < 4; i++){
        min = array[i];
        
        if(array[i] < array[i+1]){
            min = array[i+1];
        }
    }
    printf("\nThe minimum value is %d", min);
}

void findmax(int array[]){
    int max;
    for(int i = 0; i < 4; i++){
        max = array[i];
        
        if(array[i] < array[i+1]){
            max = array[i+1];
        }
    }
    printf("\nThe maximum value is %d", max);
}

int main()
{
    findmin(array);
    findmax(array);

    return 0;
}