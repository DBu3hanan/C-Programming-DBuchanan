//Miss D Buchanan - February 22, 2026
//functions and files - P1
#include <stdio.h>
#include <stdlib.h>

char fullName[255];
FILE *fp;

void openfile(){
    fp = fopen("index.txt", "a");
    
    if(fp == NULL){
        printf("The file cannot be opened");
        exit(1);
    }
    
    printf("Please enter your full name:");
    fgets(fullName, sizeof(fullName), stdin);
    
    fprintf(fp, "%s", fullName);

    fclose(fp);
}

void displayfile(){
    fp = fopen("index.txt", "r");
    
    if(fp == NULL){
        printf("The file cannot be opened");
        exit(1);
    }
    
    while(fgets(fullName, sizeof(fullName), fp) != NULL){
        printf("%s", fullName);
    }
    
    fclose(fp);
}

int main()
{
    int choice;
    printf("1.Add to File\n2.Display File");
    printf("\nChoice:");
    scanf("%d", &choice);
    getchar();
    
    switch(choice){
        case 1:
            openfile(); 
            break;
        case 2:
            displayfile();
            break;
        default:
            printf("Invalid");
    }
        
    return 0;
}