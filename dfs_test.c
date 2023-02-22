#include<stdio.h>
int a[50][50],n,i,j,stack[50],top=-1,visited[50];
void dfs(int v);
void main(){
    int v;
    printf("\nenter the size of the matrix : ");
    scanf("%d",&n);
    printf("\nenter elements\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n enter source vertex : ");     
    scanf("%d",&v);
    for(i=0;i<1;i++){
        stack[i]=0;
        visited[i]=0;
    }
    dfs(v);
    printf("\n reachable nodes are : ");
    for(i=0;i<n;i++){
        if(visited[i]){
            printf("%d ",i);
        }
    }

}
void dfs(int v){
    for(i=0;i<n;i++){
        if(a[v][i] && !visited[i]){   
            stack[++top]=i;

        }
    }if(top>=0){
        visited[stack[top]]=1;
        dfs(stack[top--]);
    }
}