#include <stdio.h>

int a[20][20], q[20], visited[20], n, i, j, f = 0, r = -1;

void bfs(int v) {
	for(i = 0; i < n; i++){
		if(a[v][i] && !visited[i]) 
		   q[++r] = i;
	}
	
	if(f <= r) {
		visited[q[f]] = 1;
		bfs(q[f++]);
	}
} 

int main() {
	int v;
	printf("\n Enter the number of vertices present in the graph:");
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		q[i] = 0;
		visited[i] = 0;
	}
	
	printf("\n Enter graph data in matrix form:\n");
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("\n Enter the starting vertex:");
	scanf("%d", &v);
	bfs(v-1);
	
	printf("\n The vertices wich are reachable are:\n\n");
	for(i = 0; i < n; i++){
		if(visited[i])
		  printf("%d\t", i+1);
	}
	
	printf("\n\n");
}
