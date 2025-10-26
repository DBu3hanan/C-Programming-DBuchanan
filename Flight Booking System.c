/*
     Prepred by: Miss Buchanan
     October 23, 2025
     Flight Booking System
*/

#include <stdio.h>
#include<stdlib.h>
#define MAX 50
char firstName[MAX];
char lastName[MAX];


void customerName (char firstName[MAX],char lastName[MAX]){
     printf("\nHello, %s %s", firstName,lastName);
      system("clear");
}

void availableFlights(){
     printf("\nPlease see available flights:");
     printf("\n1. Kingston to Miami, USA - $45,000 JMD");
     printf("\n2. Kingston to Choa Chu Kang, Singapore - $95,000 JMD");
     printf("\n3. Kingston to London, England - $145,000 JMD");
}

int flightChoice, addOnsChoice, addOns, totalSum = 0, addchoice;
int aChoice;

void caseOne();
void caseTwo();
void caseThree();

int main()
{
     printf("Welcome to the Flight Booking Portal");
     printf("\nPlease enter your first name:");
     scanf(" %s", &firstName);
     
     printf("Please enter your last name:");
     scanf(" %s", &lastName);
     
     customerName(firstName,lastName);
     
     availableFlights();
     printf("\nPlease select your choice:");
     scanf("%d", &flightChoice);
     system("clear");
    
    switch (flightChoice){
    case 1:
          customerName(firstName,lastName);
          caseOne();
          system("clear");
          break; 
     case 2:
          customerName(firstName,lastName);
          caseTwo();
          system("clear");
          break; 
     case 3:
           customerName(firstName,lastName);
           caseThree();
          system("clear");
          break;     
          
     default:
          printf("Invalid choice!");
    }
    
    if(flightChoice == 1){
         printf("\nYour departure time is 1PM");
    }
    else if(flightChoice == 2){
         printf("\nYour departure time is 5PM");
    }
    else if(flightChoice == 3){
         printf("\nYour departure time is 9PM");
    }
         
     printf("\nYour final bill is: $%d",totalSum );
     printf("Thank you for your service.");

    return 0;
    
    
}


void caseOne(){
     customerName(firstName,lastName);
          printf("\nYou selected: Kingston to Miami, USA");
          printf("\nYour departure time is 1PM");
          
          totalSum = 45000;
          printf("\n\nWould you like to select adds?\n1.Yes\n2. No\nChoice:");
          scanf("%d", &addOnsChoice);
          
          if(addOnsChoice == 1){
               printf("\nEnter -1 to stop adding\nPress 0 to begin adding");
               scanf("%d", &addchoice);
               
               while(addchoice != -1){
                    printf("\n1. Window Seat - $10,000JMD");
                    printf("\n2. Breakfast - $5,000JMD");
                    printf("\n3. Lunch - $5,500JMD");
                    printf("\n4. Dinner - $7,000JMD");
                    printf("\nChoice: ");
                    scanf("%d", &addchoice);

                    if(addchoice == 1){
                         totalSum = totalSum + 10000;
                    }
                         else if(addchoice == 2){
                              totalSum = totalSum + 5000;
                         }
                         else if(addchoice == 3){
                              totalSum = totalSum + 5500;
                         }
                         else if(addchoice == 4){
                              totalSum = totalSum + 7000;
                         }
                    else{
                      printf("Invalid choice!");   
                    }
               }
               
          }
}

void caseTwo(){
     printf("\nYou selected: Kingston to Choa Chu Kang, Singapore");
          printf("\nYour departure time is 5PM");
          
          totalSum = 95000;
          printf("\nWould you like to select adds?\n1.Yes\n2. No\nChoice:");
          scanf("%d", &addOnsChoice);
          
          if(addOnsChoice == 1){
               printf("Enter -1 to stop adding\nPress 0 to begin adding");
               scanf("%d", &addchoice);
               
               while(addchoice != -1){
                    printf("\n1. Window Seat - $10,500JMD");
                    printf("\n2. Breakfast - $6,000JMD");
                    printf("\n3. Lunch - $5,950JMD");
                    printf("\n4. Dinner - $7,900JMD");
                    printf("\nChoice: ");
                    scanf("%d", &addchoice);

                    if(addchoice == 1){
                         totalSum = totalSum + 10500;
                    }
                         else if(addchoice == 2){
                              totalSum = totalSum + 6000;
                         }
                         else if(addchoice == 3){
                              totalSum = totalSum + 5950;
                         }
                         else if(addchoice == 4){
                              totalSum = totalSum + 7900;
                         }
                    else{
                      printf("Invalid choice!");   
                    }
               }
               
          }
}

void caseThree(){
     printf("\nYou selected: Kingston to London, England");
          printf("\nYour departure time is 9PM");
          
          totalSum = 145000;
          printf("\nWould you like to select adds?\n1.Yes\n2. No\nChoice:");
          scanf("%d", &addOnsChoice);
          
          if(addOnsChoice == 1){
               printf("\nEnter -1 to stop adding\nPress 0 to begin adding");
               scanf("%d", &addchoice);
               
               while(addchoice != -1){
                    printf("\n1. Window Seat - $12,000JMD");
                    printf("\n2. Breakfast - $7,000JMD");
                    printf("\n3. Lunch - $6,500JMD");
                    printf("\n4. Dinner - $9,000JMD");
                    printf("\nChoice: ");
                    scanf("%d", &addchoice);

                    if(addchoice == 1){
                         totalSum = totalSum + 12000;
                    }
                         else if(addchoice == 2){
                              totalSum = totalSum + 7000;
                         }
                         else if(addchoice == 3){
                              totalSum = totalSum + 6500;
                         }
                         else if(addchoice == 4){
                              totalSum = totalSum + 9000;
                         }
                    else{
                      printf("Invalid choice!");   
                    }
               }
               
          }
}
