#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
} *head = NULL;

void insert(int x) {
    struct node *n = malloc(sizeof(struct node));
    n->data = x;
    n->next = head;
    head = n;
}

void delete() {
    if (head == NULL) printf("Empty\n");
    else {
        struct node *t = head;
        head = head->next;
        free(t);
    }
}

void display() {
    struct node *t = head;
    while (t) {
        printf("%d ", t->data);
        t = t->next;
    }
    printf("\n");
}

int main() {
    insert(10);
    insert(20);
    insert(30);
    display();   // 30 20 10
    delete();
    display();   // 20 10
    return 0;
}






algorithm

Insert

Create a new node

Set new node’s data

Point new node → head

Update head = new node

2. Delete

If head is NULL → List empty

Else save head in temp

Move head to next node

Free temp

3. Display

Start from head

While current node is not NULL
 a. Print its data
 b. Move to next node

