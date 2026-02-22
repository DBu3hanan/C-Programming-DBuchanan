#include <stdio.h>

int main()
{
    FILE *fp;
    char sentence[100];
    fp = fopen("Frank.txt", "a");
    
    if (fp == NULL){
        printf("Error.");
        return 1;
    }
    
    for(int i = 1; i < 6; i++){
        printf("Enter a sentence:");
        fgets(sentence, sizeof(sentence), stdin);
        
        fprintf(fp, "%d %s", i, sentence);
    }
    
    fclose(fp);
    
    fp = fopen("Frank.txt", "r");
    
    while(fgets(sentence, sizeof(sentence), fp) != NULL){
        printf("%s", sentence);
    }
    
     fclose(fp);

    return 0;
}