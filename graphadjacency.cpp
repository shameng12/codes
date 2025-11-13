#include <stdio.h>
#define MAX 10

int queue[MAX], front = -1, rear = -1;

void enqueue(int v) { queue[++rear] = v; if(front==-1) front=0; }
int dequeue() { return queue[front++]; }
int isEmpty() { return front > rear; }

void BFS(int graph[MAX][MAX], int n, int start) {
    int visited[MAX] = {0};
    enqueue(start);
    visited[start] = 1;
    printf("BFS Traversal: ");
    while(!isEmpty()) {
        int v = dequeue();
        printf("%d ", v);
        for(int i=0;i<n;i++) {
            if(graph[v][i] && !visited[i]) {
                enqueue(i);
                visited[i] = 1;
            }
        }
    }
    printf("\n");
}

int main() {
    int n, e;
    int graph[MAX][MAX] = {0};
    printf("Enter number of vertices: ");
    scanf("%d",&n);
    printf("Enter number of edges: ");
    scanf("%d",&e);

    for(int i=0;i<e;i++) {
        int u, v;
        printf("Edge %d (u v): ",i+1);
        scanf("%d %d",&u,&v);
        graph[u][v] = 1;
        graph[v][u] = 1; // For undirected graph
    }

    int start;
    printf("Enter starting vertex: ");
    scanf("%d",&start);

    BFS(graph, n, start);
    return 0;
}




Algorithm: Graph with BFS (Adjacency Matrix)

Step 1: Initialize

Create adjacency matrix graph[MAX][MAX] and set all values to 0.

Initialize visited[MAX] = 0.

Initialize queue with front = -1 and rear = -1.

Step 2: Input Graph

Read number of vertices n and edges e.

For each edge, read (u, v) and set graph[u][v] = 1 (and graph[v][u] = 1 for undirected graph).

Step 3: BFS Traversal

Enqueue starting vertex start and mark it visited.

While the queue is not empty:

Dequeue a vertex v and print it.

For each neighbor i of v:

If graph[v][i] == 1 and visited[i] == 0:

Enqueue i and mark as visited.

Step 4: End

BFS traversal is complete when the queue becomes empty.
