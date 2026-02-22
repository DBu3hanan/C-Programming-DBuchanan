/******************************************************************************
Simple FIle Coding
January 5, 2026
Simple Files - 2

*******************************************************************************/

#include <stdio.h>

int main()
{
    FILE *fp;
    
    int num = 90*3;
    
    fp = fopen("Numbers.txt", "a");
    
    fprintf(fp, "%d", num);
    
    fclose(fp);
    

    return 0;
}