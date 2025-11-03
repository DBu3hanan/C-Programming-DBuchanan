//Prepared by: Miss D Buchanan - Novemeber 2, 2025 
#include <stdio.h>

int main()
{
     int num1, num2,num3,num4, counter=1, largest;
     
     printf("Enter Number %d:", counter);
     scanf("%d", &num1);
     counter++;
     
     printf("Enter Number %d:", counter);
     scanf("%d", &num2);
     counter++;
     
     printf("Enter Number %d:", counter);
     scanf("%d", &num3);
     counter++;
     
     printf("Enter Number %d:", counter);
     scanf("%d", &num4);
     counter++;
     
     while(1){
          largest = num1;
     
     if(num2 > num1 && num2 > num3 && num2 > num4){
          largest = num2;
          break;
     }
     else if(num3 > num1 && num3 > num2 && num3 > num4 ){
          largest = num3;
          break;
     }
     else if(num4 > num1 && num4 > num2 && num4 > num3){
          largest = num4;
          break;
     }
     }
     
     
     
     printf("The largest number is %d", largest);

    return 0;
}
