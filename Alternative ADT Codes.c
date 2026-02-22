#include <stdio.h>
#define MAX 5
#define SIZE 5
int top = -1;
int stack[MAX];
int queue[SIZE];
int front = -1, rear = -1;

int push(int stack[], int value) {
    if (top == MAX - 1) {
        return -1;
    }
    stack[++top] = value;
    return 0;
}

int pop(int stack[]) {
    if (top == -1) {
        return -1;
    }
    return stack[top--];
}

int enqueue(int value){
    if(rear == SIZE -1){
        return -1;
    }
    
    if(front == -1){
        front = 0;
    }
    
    queue[++rear] = value;
    return 0;
   
}

int dequeue(){
    if(front == -1 || front > rear){
        return -1;
    }
    front++;
    if(front > rear){
        front = rear = -1;
    }
    
    return 0;
}

int C_enqueue(int value) {
    if ((rear + 1) % SIZE == front) {
        return -1;
    }
    
    if (front == -1) {
        front = rear = 0;
    } else {
        rear = (rear + 1) % SIZE;
    }

    queue[rear] = value;
    return 0;
}

int c_dequeue() {
   
    if (front == -1) {
        return -1;
    }

    if (front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % SIZE;
    }

    return 0;
}



int main(){
    
    return 0;
}