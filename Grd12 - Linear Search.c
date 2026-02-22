//Miss D Buchanan - Linear Search - Jan 31, 2026
#include <stdio.h>
int Testarray[] = {90,54,32,12};
//n is the amount of elements inside the array
//key is the element the function is searching for
int linearsearch(int array[], int n, int key){
    for(int i = 0; i < n; i++){
        if(array[i] == key){ //the element stored at that position is the key
            printf("\nThe key has been found at position %d", i);
            return i; //return the position in which the key was found at
        }
    }
    
    printf("\nThe key has not been found ");
    return -1; //return -1 if the key is not present in the array
}

int main()
{
    linearsearch(Testarray,4, 12);
    linearsearch(Testarray,4, 65);

    return 0;
}