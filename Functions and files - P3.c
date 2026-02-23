//Miss D Buchanan - February 22, 2026
//functions and files - P3
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
    int counter = 1;
    fp = fopen("index.txt", "r");
    
    if(fp == NULL){
        printf("The file cannot be opened");
        exit(1);
    }
    printf("\nFile Contents\n");
    while(fgets(fullName, sizeof(fullName), fp) != NULL){
        
        printf("%d. %s", counter ,fullName);
        counter++;
    }
    
    fclose(fp);
}

void deleteRecord(){
    int counter;
    fp = fopen("index.txt", "a");
    
    if(fp == NULL){
        printf("The file cannot be opened");
        exit(1);
    }
    
    printf("Enter the number of the record to be deleted:");
    scanf("%d", &counter);
    
    
}

int main()
{
    int choice;
    
    do{
        
        printf("\n1.Add to File\n2.Display File\n3.Delete Record\n4.Exit");
        printf("\nChoice:");
        scanf("%d", &choice);
        getchar();
    
    
        switch(choice){
            case 1:
                openfile(); 
                break;
            case 2:
                displayfile();
                printf("End of file\n");
                break;
            case 3:
                deleteRecord();
                break;
            case 4:
                exit(1);
            default:
                printf("Invalid");
        }

        
    }while (choice < 4);
    
   
    return 0;
}