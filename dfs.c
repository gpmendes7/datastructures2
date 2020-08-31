#include <stdio.h>
#include <conio.h>

int a[20][20], reach[20], n;

void dfs(int v){
	int i;
	reach[v] = 1;
	
	for(i = 0; i < n; i++)
	   if(a[v][i] && !reach[i]){
	   	  printf("\n %d->%d", v+1, i+1);
	   	  dfs(i);
	   }
}

int main(){
	int i, j, count = 0;
	printf("\n Enter number of vertices:");
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		reach[i] = 0;
		for(j = 0; j < n; j++)
		    a[i][j] = 0;
	}
	
	printf("\n Enter the adjacency matrix:\n");
	
	for(i = 0; i < n; i++)
		for(j = 0; j < n; j++)
			scanf("%d", &a[i][j]);
	
	printf("\n");
	printf("Vertices in the order they are traversed:\n");
	
	dfs(0);
	
	for(i = 0; i < n; i++){
		if(reach[i])
		   count++;
	}
	
	printf("\n");
	
	if(count == n)
	   printf("\n Graph is connected");
	else
	   printf("\n Graph is not connected");
	
	printf("\n");
	
	getch();
	
	return 0;
}

