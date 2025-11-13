#include <stdio.h>
#define MAX 10

int visited[MAX];

// DFS function
void DFS(int graph[MAX][MAX], int n, int v) {
    visited[v] = 1;
    printf("%d ", v);
    for (int i = 0; i < n; i++) {
        if (graph[v][i] && !visited[i])
            DFS(graph, n, i);
    }
}

int main() {
    int n, e;
    int graph[MAX][MAX] = {0};

    printf("Enter number of vertices: ");
    scanf("%d", &n);
    printf("Enter number of edges: ");
    scanf("%d", &e);

    for (int i = 0; i < e; i++) {
        int u, v;
        printf("Edge %d (u v): ", i+1);
        scanf("%d %d", &u, &v);
        graph[u][v] = 1;
        graph[v][u] = 1; // For undirected graph
    }

    int start;
    printf("Enter starting vertex: ");
    scanf("%d", &start);

    for(int i=0;i<n;i++) visited[i]=0;

    printf("DFS Traversal: ");
    DFS(graph, n, start);
    printf("\n");

    return 0;
}




Algorithm: DFS (Adjacency Matrix)

Step 1: Initialize

Create adjacency matrix graph[MAX][MAX].

Initialize visited[MAX] = 0.

Step 2: Input Graph

Read number of vertices n and edges e.

For each edge (u, v), set graph[u][v] = 1 (and graph[v][u] = 1 for undirected graph).

Step 3: DFS Traversal (Recursive)

Start at vertex v.

Mark v as visited and print it.

For each neighbor i of v:

If graph[v][i] == 1 and visited[i] == 0, recursively call DFS on i.

Step 4: End

DFS completes when all reachable vertices are visited.
