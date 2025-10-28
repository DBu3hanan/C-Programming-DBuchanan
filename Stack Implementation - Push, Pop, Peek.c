/*
    Prepared by: Miss Diamond Buchanan
    Date: October 14, 2025
    Stack Implementation: Push, Pop, Peek
*/

#define MAX 6
#include <stdio.h>
void push (int value);
void pop ();
int peek();
int stack [MAX];
int top = -1;
int num, peekCall;
int main()
{
    printf("Add to the stack: ");
    scanf("%d", &num);
    
    push (num);
    
    // pop();
    
    peekCall = peek ();
    
    printf("\nThere are %d elements in the stack", peekCall);

    return 0;
}

void push (int value){
    if (top == MAX - 1){
        printf("Stack is full!");
        
    }
    else{
        top++;
        stack[top] = value;
        printf("%d pushed to the stack", value);
    }
}

void pop(){
    if (top == -1){
        printf("Stack is empty!");
    }
    else{
        int value = stack [top];
        top--;
        printf("\n%d has been popped", value);
    }
}

int peek (){
    return top + 1;
}