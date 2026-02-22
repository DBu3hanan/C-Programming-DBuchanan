#include <stdio.h>

int array[] = {12,56,89,92,95};

int linsearsearch(int arrayname[], int n, int key){
    int found = 0;
    
    for(int i = 0; i < n; i++){
        if(arrayname[i] == key){
            printf("The key has found been found at position %d", i);
            found = 1;
            return i;
        }
    }
    
    if(!found){
        printf("The key is not present in the array");
        return -1;
    }
}

void linsearSearch(int arrayname[], int n, int key){
    int found = 0;
    
    for(int i = 0; i < n; i++){
        if(arrayname[i] == key){
            printf("The key has found been found at position %d", i);
            found = 1;
            break;
        }
    }
    
    if(!found){
        printf("The key is not present in the array");
    }
}

int main()
{
    linsearsearch(array,5,56);

    return 0;
}
