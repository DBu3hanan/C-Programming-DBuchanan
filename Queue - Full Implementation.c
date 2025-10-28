#include <stdio.h>              // Standard input/output library
#define SIZE 5                  // Maximum size of the queue

int queue[SIZE];                // Array to hold the queue elements
int front = -1, rear = -1;      // Variables to track the front and rear positions

// Function to check if the queue is full
int isFull() {
    if (rear == SIZE - 1)       // Rear has reached the maximum index
        return 1;
    else
        return 0;
}

// Function to check if the queue is empty
int isEmpty() {
    if (front == -1 || front > rear)   // Either queue not started or all elements removed
        return 1;
    else
        return 0;
}

// Function to add (enqueue) an element into the queue
void enqueue(int value) {
    if (isFull()) {                        // Check if queue is full
        printf("Queue is full\n");         // Display message if queue cannot take more items
    } else {
        if (front == -1) front = 0;        // If inserting first element, set front to 0
        rear++;                            // Move rear forward
        queue[rear] = value;               // Insert the value at the rear position
        printf("%d inserted into the queue\n", value);  // Confirm insertion
    }
}

// Function to remove (dequeue) an element from the queue
void dequeue() {
    if (isEmpty()) {                       // Check if queue is empty
        printf("Queue is empty\n");        // Display message if no elements exist
    } else {
        printf("%d removed from the queue\n", queue[front]);  // Show the removed element
        front++;                           // Move front forward (removes element logically)
    }
}

// Function to display the elements of the queue
void display() {
    if (isEmpty()) {                       // Check if queue is empty
        printf("Queue is empty\n");        // Display empty message
    } else {
        printf("Queue elements: ");        // Print elements currently in the queue
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);       // Print each element
        }
        printf("\n");                      // New line after printing
    }
}

// Main function to test queue operations
int main() {
    enqueue(10);                 // Insert 10 into the queue
    enqueue(20);                 // Insert 20 into the queue
    enqueue(30);                 // Insert 30 into the queue
    display();                   // Display queue contents

    dequeue();                   // Remove front element (10)
    display();                   // Display queue after removal

    enqueue(40);                 // Insert 40 into the queue
    enqueue(50);                 // Insert 50 into the queue
    enqueue(60);                 // Attempt to insert beyond capacity
    display();                   // Display final queue

    return 0;                    // End of program
}
