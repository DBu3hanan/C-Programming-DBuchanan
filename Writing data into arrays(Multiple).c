/*Writing data into arrays(Multiple) - Miss Buchanan - October 28,2025*/
#include <stdio.h>
int main()
{
     int array [5]; //declare array
     int n = 5; //initalize varible with the amount of elements in array
     printf("Enter numbers:"); //prompt user
     
     for(int i = 0; i < n; i++){ //for loop to collect data
          scanf("%d", &array[i]); //pass i to increment position of loop
     }
     
    
    return 0;
}




