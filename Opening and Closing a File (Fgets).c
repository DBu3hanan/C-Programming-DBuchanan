//Prepared by: Miss D Buchanan
//Feb 15, 2026
//Opening and Closing a File (Fgets)
#include <stdio.h>

int main()
{
    FILE *fp;
    char string [100];
    fp = fopen("Earl.txt", "a");
    
    if(fp == NULL){
        printf("Error");
        return 1;
    }
    
    for(int i = 1; i < 6; i++){
        printf("Enter sentence:");
        fgets(string, sizeof(string), stdin);
        
        fprintf(fp,"%s", string);
    }
    
    fclose(fp);
    
    fp = fopen("Earl.txt", "r");
    
     if(fp == NULL){
        printf("Error");
        return 1;
    }
    
    while(fgets(string, sizeof(string), fp) != NULL){
        printf(" %s", string);
    }
    fclose(fp);

    return 0;
}
