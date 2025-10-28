
#include <stdio.h>


int main()
{
     int num, value;
     
    printf("How many loops:");
    scanf("%d", &num);
    
    value = addition(num);

    return 0;
}


int addition (int counter){
     
   for(int i =0; i > counter; i++)  {
        printf("Hello");
   }
   
   return 0;
}
