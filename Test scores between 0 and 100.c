//Prepared by: Miss D Buchanan - Test scores between 0 and 100 - Novemeber 8,2025
#include <stdio.h>
int temp,temp2 = 0, total = 0, largest, counter =1, terminater;
int main()
{
     int testGrade;
     while(1){
          printf("Enter test grade:");
          scanf("%d", &testGrade);
          
          temp = testGrade;
          temp2 = largest;
          total +=testGrade;
          counter++;
          
          if(testGrade > largest && testGrade < 100){
               largest = testGrade;
          }
          
          if(testGrade > 100){
               total -= testGrade;
               testGrade = 0;
               printf("\nInvalid grade\n");
               counter--;
          }
          else if(testGrade < 0){
               terminater = testGrade;
               counter--;
               counter--;
               break;
          }
     }
     printf("\nLargest Test Grade: %d", largest);
     printf("\nTotal is: %d", total - terminater);
     printf("\nThe amount of test grades entered: %d", counter);

    return 0;
}