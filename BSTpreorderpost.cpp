#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the structure for BST node
struct Node {
    char name[50];
    struct Node* left;
    struct Node* right;
};

// Create a new node
struct Node* createNode(char name[]) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    strcpy(newNode->name, name);
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Insert node into BST
struct Node* insert(struct Node* root, char name[]) {
    if (root == NULL) return createNode(name);
    if (strcmp(name, root->name) < 0)
        root->left = insert(root->left, name);
    else if (strcmp(name, root->name) > 0)
        root->right = insert(root->right, name);
    return root;
}

// Inorder traversal (Left, Root, Right)
void inorder(struct Node* root) {
    if (root) {
        inorder(root->left);
        printf("%s ", root->name);
        inorder(root->right);
    }
}

// Preorder traversal (Root, Left, Right)
void preorder(struct Node* root) {
    if (root) {
        printf("%s ", root->name);
        preorder(root->left);
        preorder(root->right);
    }
}

// Postorder traversal (Left, Right, Root)
void postorder(struct Node* root) {
    if (root) {
        postorder(root->left);
        postorder(root->right);
        printf("%s ", root->name);
    }
}

// Search for a name in BST
struct Node* search(struct Node* root, char name[]) {
    if (root == NULL || strcmp(root->name, name) == 0)
        return root;
    if (strcmp(name, root->name) < 0)
        return search(root->left, name);
    else
        return search(root->right, name);
}

// Main function
int main() {
    struct Node* root = NULL;
    int n, i;
    char name[50], searchName[50];

    printf("Enter number of names to insert: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter name %d: ", i + 1);
        scanf("%s", name);
        root = insert(root, name);
    }

    printf("\nInorder traversal: ");
    inorder(root);
    printf("\nPreorder traversal: ");
    preorder(root);
    printf("\nPostorder traversal: ");
    postorder(root);

    printf("\n\nEnter name to search: ");
    scanf("%s", searchName);
    struct Node* result = search(root, searchName);
    if (result)
        printf("%s found in directory.\n", searchName);
    else
        printf("%s not found.\n", searchName);

    return 0;
}





Algorithm: BST with Traversals and Search

Step 1: Initialize

Create root = NULL.

Step 2: Insert a Node

If root == NULL, create new node and assign to root.

Else, compare name with current node:

If smaller, go to left subtree.

If larger, go to right subtree.

Repeat recursively until inserted.

Step 3: Traversals (Recursive)

Inorder: Traverse left → print node → traverse right.

Preorder: Print node → traverse left → traverse right.

Postorder: Traverse left → traverse right → print node.

Step 4: Search a Name (Recursive)

If node is NULL or node->name matches, return node.

If name < node->name, search left subtree.

If name > node->name, search right subtree.
