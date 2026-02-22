//Prepared by: Miss D Buchanan - December 7, 2025 - User Stack
#include <stdio.h>
#define MAX 5
int stack[MAX];
int top = -1;

void push(int stack[], int value){
    if(top == MAX - 1){
      printf("The stack is full");  
    }else{
        top++;
        stack[top] = value;
    }
}

int pop(int stack[]){
    if(top == -1){
        printf("The stack is empty");
    }
    
    int value = stack[top];
    top--;
    return value;
}

void display(int stack[]){
    if(top == -1){
        printf("The stack is empty");
    }else{
        printf("\nElements in stack:\n");
        for(int i = top; i >= 0; i--){
            printf("\n|%d|", stack[i]);
        }
    }
}


int main()
{
    int element;
    for(int i = MAX; i >0; i--){
        printf("Enter element:");
        scanf("%d", &element);
        
        push(stack,element);
    }
    
    display(stack);

    return 0;
}