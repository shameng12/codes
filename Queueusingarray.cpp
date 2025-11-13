#include <stdio.h>
#define MAX 5

int q[MAX], front = 0, rear = -1;

void enqueue(int x) {
    if (rear == MAX-1) printf("Overflow\n");
    else q[++rear] = x;
}

void dequeue() {
    if (front > rear) printf("Underflow\n");
    else front++;
}

void display() {
    if (front > rear) printf("Empty\n");
    else {
        for (int i = front; i <= rear; i++)
            printf("%d ", q[i]);
        printf("\n");
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();   // 10 20 30
    dequeue();
    display();   // 20 30
    return 0;
}
