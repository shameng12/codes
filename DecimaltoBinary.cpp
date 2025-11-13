#include <stdio.h>
#define MAX 32  // Maximum bits for an integer

// Stack structure
int stack[MAX];
int top = -1;

// Function to push an element onto the stack
void push(int value) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = value;
}

// Function to pop an element from the stack
int pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[top--];
}

int main() {
    int decimal, temp;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    temp = decimal;

    // Convert decimal to binary using stack
    while (temp > 0) {
        push(temp % 2);
        temp = temp / 2;
    }

    printf("Binary equivalent of %d is: ", decimal);
    while (top != -1) {
        printf("%d", pop());
    }
    printf("\n");

    return 0;
}



Algorithm: Decimal to Binary Conversion Using Stack

Step 1: Start
Step 2: Initialize an empty stack
Step 3: Read the decimal number N
Step 4: Repeat until N > 0
  a) Compute remainder = N % 2
  b) Push remainder onto the stack
  c) Set N = N / 2
Step 5: While the stack is not empty
  a) Pop and print each element (this gives the binary digits)
Step 6: Stop
