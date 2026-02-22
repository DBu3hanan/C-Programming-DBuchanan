#include <stdio.h>
int array[]={89,51,37,29};

int sumofElements (int array[]){
    int sum = 0;
    
    for(int i = 0; i < 4; i++){
        sum += array[i];
       
    }
    printf("The sum is: %d." , sum);
    return sum;
}

int main()
{
    sumofElements(array);

    return 0;
}