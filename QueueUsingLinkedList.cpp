#include <stdio.h>
#include <stdlib.h>

struct Node { int data; struct Node* next; } *front=NULL, *rear=NULL;

void enqueue(int val) {
    struct Node* n = malloc(sizeof(struct Node));
    n->data = val; n->next = NULL;
    if(!rear) front = rear = n;
    else { rear->next = n; rear = n; }
}

int dequeue() {
    if(!front) return -1;
    int val = front->data;
    struct Node* temp = front;
    front = front->next;
    if(!front) rear = NULL;
    free(temp);
    return val;
}

void display() {
    struct Node* t = front;
    while(t){ printf("%d ", t->data); t = t->next; }
    printf("\n");
}

int main() {
    enqueue(10); enqueue(20); enqueue(30);
    display();
    printf("Dequeued: %d\n", dequeue());
    display();
}




Algorithm: Queue Using Linked List

Step 1: Initialize

Set front = NULL and rear = NULL.

Step 2: Enqueue (Insert)

Create a new node newNode with data = value and next = NULL.

If rear == NULL, set front = rear = newNode.

Else, set rear->next = newNode and update rear = newNode.

Step 3: Dequeue (Remove)

If front == NULL, queue is empty. Stop.

Store front->data in value.

Move front = front->next.

If front == NULL, set rear = NULL.

Free the removed node and return value.

Step 4: Display Queue

Start from front and print all node data until NULL.
