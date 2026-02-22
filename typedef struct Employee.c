#include <stdio.h>
typedef struct Employee{
    char fName [60];
    char lName[60];
}emp; //name used to call the struct

int main(){
    emp employee; //employee object
    
    printf("Enter Employee First Name:");
    scanf("%s", employee.fName);
    
    return 0; 
}



