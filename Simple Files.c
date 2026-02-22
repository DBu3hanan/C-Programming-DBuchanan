/******************************************************************************
Simple FIle Coding
January 5, 2026
Simple Files

*******************************************************************************/

#include <stdio.h>

int main()
{
    FILE *fp;
    
    fp = fopen("students.txt", "a");
    
    fprintf(fp, "\n Student 1: Gigi Hancock \n Student 2: Yanique Klein");
    
    fclose(fp);
    

    return 0;
}