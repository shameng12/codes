#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Push function
void push(struct Node** top, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = *top;
    *top = newNode;
    printf("%d pushed\n", value);
}

// Pop function
int pop(struct Node** top) {
    if (*top == NULL) {
        printf("Stack underflow\n");
        return -1;
    }
    struct Node* temp = *top;
    int value = temp->data;
    *top = temp->next;
    free(temp);
    return value;
}

// Display stack
void display(struct Node* top) {
    while (top) {
        printf("%d ", top->data);
        top = top->next;
    }
    printf("\n");
}

int main() {
    struct Node* stack = NULL;

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    display(stack);

    printf("Popped: %d\n", pop(&stack));
    display(stack);

    return 0;
}





Step 1: Initialize

Start with top = NULL.

Step 2: Push Operation

Create a new node newNode.

Set newNode->data = value.

Set newNode->next = top.

Update top = newNode.

Step 3: Pop Operation

If top == NULL, stack is empty. Stop.

Store top->data in value.

Move top = top->next.

Free the old top node.

Return value.

Step 4: Peek Operation

If top == NULL, stack is empty. Stop.

Return top->data.

Step 5: Display Stack

Start from top and traverse nodes.

Print data of each node until NULL.
