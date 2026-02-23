//Miss D Buchanan - February 22, 2026
//Functions and Files - P4
#include <stdio.h>
#include <stdlib.h>

char fullName[255];
char buffer[255] = {"   "};
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
    int recNum, counter = 1;
    FILE *temp;
    
    fp = fopen("index.txt", "r");
    
    if(fp == NULL){
        printf("The file cannot be opened");
        exit(1);
    }
    
    temp = fopen("temp.txt", "w");
    
    if(temp == NULL){
        printf("Temporary file cannot be opened");
        exit(1);
    }
    
    printf("Enter the number of the record to be deleted: ");
    scanf("%d", &recNum);
    getchar();   // clear newline
    
    if(recNum < 1){
        printf("Invalid record number.\n");
        fclose(fp);
        fclose(temp);
        return;
    }
    
    while(fgets(fullName, sizeof(fullName), fp) != NULL){
        
        if(counter != recNum){
            fprintf(temp, "%s", fullName);
        }
        
        counter++;
    }
    
    fclose(fp);
    fclose(temp);
    
    remove("index.txt");
    rename("temp.txt", "index.txt");
    
    printf("Record deleted successfully.\n");
}



int main()
{
    int choice;
    
    do{
        
        printf("\n1.Add to File\n2.Display File\n3.Delete Record\n4.Exit\n5.Delete File");
        printf("\nChoice: ");
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
                exit(0);
                
            case 5:
                if(remove("index.txt") == 0)
                    printf("File deleted successfully.\n");
                else
                    printf("File could not be deleted.\n");
                break;
                
            default:
                printf("Invalid choice.\n");
        }

        
    }while (choice != 4);
    
    return 0;
}