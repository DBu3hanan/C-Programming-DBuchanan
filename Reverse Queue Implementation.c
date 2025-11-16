//Prepared by: Miss D Buchanan - November 15, 2025: 11:20AM - Reverse Queue Implementation 
#include <stdio.h>
#define SIZE 8
int queue[SIZE];
int front = -1, rear = -1;

void enqueue(int value){
     if(rear == SIZE - 1){
          printf("\nThe queue is full");
     }else{
          if(front == -1){
               front = 0;
          }
          rear++;
          queue[rear] = value;
          printf("\n%d has been enqueued", value);
     }
     
}

void display(){
     if(front ==-1 || front > rear){
          printf("\nThe queue is empty");
     }else{
          printf("\nThe elements in the queue are:");
          
          for(int i = front; i <=rear; i++ ){
               printf("|%d|", queue[i]);
          }
     }
}

void reverseQueue(){
     if(front == -1 || front > rear){
          printf("The queue is empty");
     }else{
          int temp[SIZE];
          int count = 0;
          
          while(front != -1 && front <= rear){
               temp[count] = queue[front];
               front++;
               count++;
          }
          
          front = 0;
          rear = -1;
          
          for(int i = count - 1; i>=0; i--){
               rear++;
               queue[rear] = temp[i];
          }
          
          printf("\nThe queue has been reversed");
     }
}


int main()
{
     enqueue(67);
     enqueue(7);
     enqueue(8);
     display();
     reverseQueue();
     display();

    return 0;
}