/*D.Buchanan - 11/05/2025 - Stack Operations*/
#include <stdio.h>
#define MAX 50
int top =-1;
int stack[MAX];

int isFull(){
     return top == MAX -1;
}

int isEmpty(){
     return top ==-1;
}

void push(int stack[], int value){
     if(isFull()){
          printf("\n\nStack is full");
     }
     else{
          top++;
          stack[top] = value;
          printf("\n\n%d has been pushed", value);
     }
}

void pop(int stack[]){
     if(isEmpty()){
          printf("\n\nThe stack is empty");
     }else{
          int value = stack[top];
          top--;
          printf("\n\n%d has been popped", value);
          
     }
}

void display(int stack[]){
     if(isEmpty()){
          printf("\nThe stack is empty");
     }else{
          printf("\n\nThe elements in the stack are:");
          for(int i = top; i >= 0; i--){
               printf("\n%d", stack[i]);
          }
          
     }
}

int main()
{
     printf("Stack operations:");
     push(stack, 9);
     push(stack, 56);
     push(stack, 6);
     pop(stack);
     display(stack);

    return 0;
}
