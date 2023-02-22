#include <stdio.h>
#include <limits.h>

int graph[50][50];
int visited[50];
int dist[50];
int parent[50];

int find_min_node(int n) {
    int min_dist = INT_MAX, min_node = -1;
    for (int i = 0; i < n; i++) {
        if (!visited[i] && dist[i] < min_dist) {
            min_dist = dist[i];
            min_node = i;
        }
    }
    return min_node;
}

void prim(int n) {
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
        dist[i] = INT_MAX;
        parent[i] = -1;
    }
    dist[0] = 0;
    for (int i = 0; i < n; i++) {
        int u = find_min_node(n);
        visited[u] = 1;
        for (int v = 0; v < n; v++) {
            if (graph[u][v] && !visited[v] && graph[u][v] < dist[v]) {
                dist[v] = graph[u][v];
                parent[v] = u;
            }
        }
    }
}

void print_mst(int n) {
    printf("Minimum Spanning Tree:\n");
    for (int i = 1; i < n; i++) {
        printf("%d - %d\n", parent[i], i);
    }
}

int main() {
    int n, m;
    printf("Enter number of nodes and edges: ");
    scanf("%d %d", &n, &m);
    printf("Enter edges and weights: \n");
    for (int i = 0; i < m; i++) {
        int u, v, w;
        scanf("%d %d %d", &u, &v, &w);
        graph[u][v] = graph[v][u] = w;
    }
    prim(n);
    print_mst(n);
    return 0;
}


// output--->

// Enter number of nodes and edges: 4
// 4
// Enter edges and weights: 
// 0 1 1
// 1 2 1
// 3 2 1
// 0 3 5
// Minimum Spanning Tree:
// 0 - 1
// 1 - 2
// 2 - 3