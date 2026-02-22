#include <stdio.h>
#include <string.h>

int main()
{
    char myName[20];
    char owner[20];
    printf("What is your name?");
    scanf("%s",myName);
    printf("Who is the owner of the product?");
    scanf("%s",owner);
    
    if (strcmp(myName,owner)==0){
        printf("You are the owner of the product!");
    }else{
        printf("You are not the owner.");
        
    }

    return 0;
}