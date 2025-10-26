/*
    Prepared by: Miss Diamond Buchanan
    Date: October 14, 2025
    Stack Implementation: Push, Pop, Peek, IsEmpty
*/
#define MAX 6
#include <stdio.h>
void push (int value);
void pop ();
int peek();
int isEmpty ();
int stack [MAX];
int top = -1;
int num, peekCall, isEmptyCall;
int main()
{
    
    do{
        printf("\nAdd to the stack: ");
        scanf("%d", &num);
        
            if (num != -1){
                 push (num);
                
                peekCall = peek ();
                printf("\nThere are %d elements in the stack", peekCall);
                isEmptyCall = isEmpty();
                printf("\nThe stack is %d",isEmptyCall );
                pop();
            }
            else{
                printf("You cannot add -1 to the stack");
            }
        
    } while (num != -1);
    
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

int isEmpty(){
    return top ==-1;
}