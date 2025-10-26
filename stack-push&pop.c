/*
Prepared by: Miss Diamond Buchanan
October 7, 2025
Overflow-Stack
*/
#include <stdio.h>
#define MAX 3

int top = -1;
int stack [MAX];

void push(int value);
void pop();

int main()
{
     push (10);
     push (1);
     push (5);
     pop();
     pop();


    return 0;
}

void push(int value){
     if (top ==MAX - 1){
          printf("\nStack is full. Cannot push %d", value);
     }
     else{
          top++;
          stack[top] = value;
          printf("\n%d was pushed to the stack", value);
     }
}

void pop(){
     if (top ==- 1){
          printf("\nStack is empty. Cannot pop from empty stack");
     }
     else{
          
          int value = stack[top];
          top--;
          printf("\n%d was popped from the stack", value);
     }
     
}
