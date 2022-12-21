
#include<stdio.h>
int a[10][10],i,j,n,visited[10],queue[10],front=-1,rear=-1;
void bfs();
void main(){
    int v;
    printf("\nenter size of graph\n");
    scanf("%d",&n);
    printf("\nenter elments in graph\n");
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nmatrix is \n");
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
    printf("\nenter starting vertex\n");
    scanf("%d",&v);
    bfs(v);
    printf("\nthe nodes which are reachable are\n");
    for(i=1;i<=n;i++){
        if(visited[i]){
            printf("%d\n",i);
        } else {
            printf("\nnot all nodes are reachable\n");
            
        }
    }
 

}
void bfs(int v){
    for(i=1;i<=n;i++){
        if(a[v][i] && !visited[i]){
            queue[++rear]=i;
        }
        }if(front<=rear){
            visited[queue[front]]=1;
            bfs(queue[front++]); 

        }

    
}