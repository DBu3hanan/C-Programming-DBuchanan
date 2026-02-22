/******************************************************************************
                        Prepared by: Miss D Buchanan
                        December 1, 2025
                        Circular Queue
*******************************************************************************/
#include <stdio.h>
#define SIZE 3
int queue [SIZE];

int front = -1, rear = -1;

void c_enqueue(int value) {
    if ((rear + 1) % SIZE == front) {
        printf("The queue is full");
    }
    
    if (front == -1) {
        front = rear = 0;
    } else {
        rear = (rear + 1) % SIZE;
    }

    queue[rear] = value;
    
}

int c_dequeue() {
   
    if (front == -1) {
        printf("The queue is empty");
        return -1;
    }

    if (front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % SIZE;
    }

    return 0;
}



int main()
{
    c_enqueue(7);
    c_enqueue(1);
    c_enqueue(2);
    c_dequeue();
    c_enqueue(9);

    return 0;
}