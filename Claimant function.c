#include <stdio.h>

int getID(int claimant){
    return claimant + 7;
}

int main(){
    int ID;
    printf("Please enter Claimant ID:");
    scanf("%d", &ID);

    if(getID(ID) < 5){
        printf("Hello World");
    }else if(getID(ID) >= 6 && getID(ID) <= 10 ){
        printf("World");
    }else{
        printf("Hello");
    }
    
    return 0;
}