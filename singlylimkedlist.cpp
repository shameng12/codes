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
