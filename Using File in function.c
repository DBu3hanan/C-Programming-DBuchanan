//Miss D Buchanan - February 22, 2026
//Using File in function
#include <stdio.h>
#include <stdlib.h>

void openfile(){
    FILE *fp;
    
    fp = fopen("index.txt", "a");
    
    if(fp == NULL){
        printf("The file cannot be opened");
        exit(1);
    }
    
    fprintf(fp, "Hello World");
    
    fclose(fp);
}

int main()
{
    openfile();

    return 0;
}