#include <stdio.h>
#include <stdlib.h>

int graph[50][50];
int visited[50];
int stack[50];
int top = -1;

void dfs(int node, int n) {
    visited[node] = 1;
    for (int i = 0; i < n; i++) {
        if (graph[node][i] && !visited[i]) {
            dfs(i, n);
        }
    }
    stack[++top] = node;
}

void topological_sort(int n) {
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            dfs(i, n);
        }
    }
    printf("Topological order: ");
    while (top >= 0) {
        printf("%d ", stack[top--]);
    }
}

int main() {
    int n, m;
    printf("Enter number of nodes and edges: ");
    scanf("%d %d", &n, &m);
    printf("Enter edges: \n");
    for (int i = 0; i < m; i++) {
        int u, v;
        scanf("%d %d", &u, &v);
        graph[u][v] = 1;
    }
    topological_sort(n);
    return 0;
}

// output--->

// Enter number of nodes and edges: 4
// 3
// Enter edges: 
// 0 1
// 1 2
// 3 2
// Topological order: 3 0 1 2