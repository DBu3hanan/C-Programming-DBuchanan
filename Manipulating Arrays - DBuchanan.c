/*Manipulating Arrays - Miss Buchanan - October 28, 2025*/
#include <stdio.h>
int array[5]; //declare array
int n = 5, counter = 0; //initalize varibles to for controling constructs
int main()
{
     for(int i = 0; i < n; i++){ //use for loop to add elements to array
          printf("Add to array:");
          //i is incrementing to add elements at the position i is at as it gets larger
          scanf("%d", &array[i]); 
     }
     
     //have to put printf statement outside so it's not printed everytime the loop runs
     printf("\nItems in the array are:");
     //while the counter is less than n
     while(counter < n){
          
          //use the counter to control the positioning of the array
          printf("%d", array[counter]); 
          
          //incrementing counter everytime it loops
          counter++;
     }
    return 0;
}