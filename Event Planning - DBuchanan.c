/*
     Miss Buchanan
     October 24, 2025
     Event Planning
*/

#include <stdio.h>
#include <string.h>
int main()
{
     char FirstName [50];
     char lastName [50];
     char Year [4];
     int MonthSelection, DayChoice, YearChoice;
     printf("Enter your first name:");
     scanf(" %s", &FirstName);
     
     printf("Enter your first name:");
     scanf(" %s", &lastName);
     
     printf("Hello, %s %s",FirstName,lastName);
     
     printf("\nPlease select a month");
     printf("\n\n1. January\n2. February\n3. March\n4. April");
     printf("\n5. May\n6. June\n7. July\n8. August");
     printf("\n9. September\n10. October\n11. November\n12. December\n");
     printf("Choice:");
     
     scanf("%d", &MonthSelection);
     
     switch(MonthSelection){
          case 1:
          strcpy(Year, "January");
               
               printf("\nPlease enter the date:");
               scanf("%d", &DayChoice);
               
               if(DayChoice > 31 || DayChoice < 0){
                    printf("\nInvalid Choice");
               }
               else{
                    
                    
                   printf("Please enter the year:");
                   scanf("%d", &YearChoice);
                   
                   if(YearChoice > 2027 || YearChoice < 2000 ){
                        printf("\nInvalid Choice");
                   }
                   else{
                        printf("\nYou have chosen %s %d %d", Year, DayChoice, YearChoice );
                   }
               }
               break;
               
          case 2:
               strcpy(Year, "February");
               printf("\nPlease enter the date:");
               scanf("%d", &DayChoice);
               
               if(DayChoice > 28 || DayChoice < 0){
                    printf("\nInvalid Choice");
               }
               else{
                    
                    
                   printf("Please enter the year:");
                   scanf("%d", &YearChoice);
                   
                   if(YearChoice > 2027 || YearChoice < 2000 ){
                        printf("\nInvalid Choice");
                   }
                   else{
                        printf("\nYou have chosen %s %d %d", Year, DayChoice,YearChoice );
                   }
               }
               break;
               
          case 3:
               strcpy(Year, "March");
               printf("\nPlease enter the date:");
               scanf("%d", &DayChoice);
               
               if(DayChoice > 31 || DayChoice < 0){
                    printf("\nInvalid Choice");
               }
               else{
                    
                    
                   printf("Please enter the year:");
                   scanf("%d", &YearChoice);
                   
                   if(YearChoice > 2027 || YearChoice < 2000 ){
                        printf("\nInvalid Choice");
                   }
                   else{
                        printf("\nYou have chosen %s %d %d", Year, DayChoice,YearChoice );
                   }
               }
               break;
               
          case 4:
          strcpy(Year, "April");
               printf("\nPlease enter the date:");
               scanf("%d", &DayChoice);
               
               if(DayChoice > 30 || DayChoice < 0){
                    printf("\nInvalid Choice");
               }
               else{
                    
                    
                   printf("Please enter the year:");
                   scanf("%d", &YearChoice);
                   
                   if(YearChoice > 2027 || YearChoice < 2000 ){
                        printf("\nInvalid Choice");
                   }
                   else{
                        printf("\nYou have chosen %s %d %d", Year, DayChoice,YearChoice );
                   }
               }
          break;
          case 5:
          strcpy(Year, "May");
               printf("\nPlease enter the date:");
               scanf("%d", &DayChoice);
               
               if(DayChoice > 31 || DayChoice < 0){
                    printf("\nInvalid Choice");
               }
               else{
                    
                    
                   printf("Please enter the year:");
                   scanf("%d", &YearChoice);
                   
                   if(YearChoice > 2027 || YearChoice < 2000 ){
                        printf("\nInvalid Choice");
                   }
                   else{
                        printf("\nYou have chosen %s %d %d", Year, DayChoice,YearChoice );
                   }
               }
          case 6:
          strcpy(Year, "June");
               printf("\nPlease enter the date:");
               scanf("%d", &DayChoice);
               
               if(DayChoice > 30 || DayChoice < 0){
                    printf("\nInvalid Choice");
               }
               else{
                    
                    
                   printf("Please enter the year:");
                   scanf("%d", &YearChoice);
                   
                   if(YearChoice > 2027 || YearChoice < 2000 ){
                        printf("\nInvalid Choice");
                   }
                   else{
                        printf("\nYou have chosen %s %d %d", Year, DayChoice,YearChoice );
                   }
               }
          break;
          case 7:
          strcpy(Year, "July");
               printf("\nPlease enter the date:");
               scanf("%d", &DayChoice);
               
               if(DayChoice > 30 || DayChoice < 0){
                    printf("\nInvalid Choice");
               }
               else{
                    
                    
                   printf("Please enter the year:");
                   scanf("%d", &YearChoice);
                   
                   if(YearChoice > 2027 || YearChoice < 2000 ){
                        printf("\nInvalid Choice");
                   }
                   else{
                        printf("\nYou have chosen %s %d %d", Year, DayChoice,YearChoice );
                   }
               }
          break;
          case 8:
          strcpy(Year, "August");
               printf("\nPlease enter the date:");
               scanf("%d", &DayChoice);
               
               if(DayChoice > 31 || DayChoice < 0){
                    printf("\nInvalid Choice");
               }
               else{
                    
                    
                   printf("Please enter the year:");
                   scanf("%d", &YearChoice);
                   
                   if(YearChoice > 2027 || YearChoice < 2000 ){
                        printf("\nInvalid Choice");
                   }
                   else{
                        printf("\nYou have chosen %s %d %d", Year, DayChoice,YearChoice );
                   }
               }
          break;
          case 9:
          strcpy(Year, "September");
               printf("\nPlease enter the date:");
               scanf("%d", &DayChoice);
               
               if(DayChoice > 30 || DayChoice < 0){
                    printf("\nInvalid Choice");
               }
               else{
                    
                    
                   printf("Please enter the year:");
                   scanf("%d", &YearChoice);
                   
                   if(YearChoice > 2027 || YearChoice < 2000 ){
                        printf("\nInvalid Choice");
                   }
                   else{
                        printf("\nYou have chosen %s %d %d", Year, DayChoice,YearChoice );
                   }
               }
          break;
          case 10:
          strcpy(Year, "July");
               printf("\nPlease enter the date:");
               scanf("%d", &DayChoice);
               
               if(DayChoice > 31 || DayChoice < 0){
                    printf("\nInvalid Choice");
               }
               else{
                    
                    
                   printf("Please enter the year:");
                   scanf("%d", &YearChoice);
                   
                   if(YearChoice > 2027 || YearChoice < 2000 ){
                        printf("\nInvalid Choice");
                   }
                   else{
                        printf("\nYou have chosen %s %d %d", Year, DayChoice,YearChoice );
                   }
               }
          break;
          case 11:
          strcpy(Year, "November");
               printf("\nPlease enter the date:");
               scanf("%d", &DayChoice);
               
               if(DayChoice > 30 || DayChoice < 0){
                    printf("\nInvalid Choice");
               }
               else{
                    
                    
                   printf("Please enter the year:");
                   scanf("%d", &YearChoice);
                   
                   if(YearChoice > 2027 || YearChoice < 2000 ){
                        printf("\nInvalid Choice");
                   }
                   else{
                        printf("\nYou have chosen %s %d %d", Year, DayChoice,YearChoice );
                   }
               }
          break;
          case 12:
          strcpy(Year, "Decmber");
               printf("\nPlease enter the date:");
               scanf("%d", &DayChoice);
               
               if(DayChoice > 31 || DayChoice < 0){
                    printf("\nInvalid Choice");
               }
               else{
                    
                    
                   printf("Please enter the year:");
                   scanf("%d", &YearChoice);
                   
                   if(YearChoice > 2027 || YearChoice < 2000 ){
                        printf("\nInvalid Choice");
                   }
                   else{
                        printf("\nYou have chosen: %s %d %d", Year, DayChoice,YearChoice );
                   }
               }
          break;
     }
     
     
     printf("\nEnd of program");

    return 0;
}
