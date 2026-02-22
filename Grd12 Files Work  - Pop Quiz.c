/******************************************************************************
Write a C program loops to process numbers from 1 to 100. 
The program should write all numbers that are divisible by both 3 and 4 into a file named results. 
For each number written, also write its square and cube in the file beside the number. 
The code must account for errors in opening the file.

*******************************************************************************/
#include <stdio.h>

int main()
{
    FILE *fp;
    
    fp = fopen("results.txt", "a");
    
    if(fp == NULL){
        printf("Error opening file");
        return 1;
    }
    
    for(int i = 1; i <= 100; i++){
        if(i % 3 == 0 && i % 4 == 0){
            fprintf(fp, "\n%d | %d | %d", i, i*i, i*i*i);
        }
    }
    
    fclose(fp);

    return 0;
}