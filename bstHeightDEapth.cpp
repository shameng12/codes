#include <stdio.h>
#include <stdlib.h>

struct Node { int data; struct Node *l,*r; };

struct Node* insert(struct Node* r,int d){ 
    if(!r) { struct Node* n=malloc(sizeof(struct Node)); n->data=d; n->l=n->r=NULL; return n; }
    if(d<r->data) r->l=insert(r->l,d); else if(d>r->data) r->r=insert(r->r,d);
    return r;
}

int height(struct Node* r){ if(!r) return 0; int l=height(r->l), ri=height(r->r); return (l>ri?l:ri)+1; }

int depth(struct Node* r,int k){ if(!r) return -1; if(r->data==k) return 0; int d=(k<r->data?depth(r->l,k):depth(r->r,k)); return d==-1?-1:d+1; }

void inorder(struct Node* r){ if(r){ inorder(r->l); printf("%d ",r->data); inorder(r->r); } }

int main(){
    struct Node* root=NULL; int n,v,k;
    scanf("%d",&n);
    for(int i=0;i<n;i++){ scanf("%d",&v); root=insert(root,v); }
    inorder(root); printf("\nHeight: %d\n",height(root));
    scanf("%d",&k);
    int d=depth(root,k);
    printf(d!=-1?"Depth of %d: %d\n":"%d not found\n",k,d);
}




algorithm
Algorithm: BST Height and Depth

Step 1: Initialize

Create root = NULL.

Step 2: Insert Node

If root is NULL, create new node.

Else, if data < root->data, insert in left subtree.

Else, insert in right subtree.

Step 3: Compute Height (Recursive)

If node is NULL, return 0.

Height = max(height(left), height(right)) + 1.

Step 4: Compute Depth of Node (Recursive)

If node is NULL, return -1 (not found).

If node value matches, return 0.

Else, depth = 1 + depth(left or right) depending on comparison.

Step 5: End

Height gives longest path from root to leaf.

Depth gives distance from root to given node.
