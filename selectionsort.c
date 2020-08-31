#include <stdio.h>

int main(){
	int array[100];
	int n, i, j;
	int min, swap;
	
	printf("\n Enter the size of the array.\n");
	scanf("%d", &n);
	
	printf("\n Enter %d elements.\n", n);
	
	for(i = 0; i < n; i++)
	   scanf("%d", &array[i]);
	   
	for(i = 0; i <= (n-2); i++){
		min = i;
		
		for(j = i + 1; j <= n-1; j++){
			if(array[j] < array[min])
			   min = j;
		}
		
		swap = array[i];
		array[i] = array[min];
		array[min] = swap;
	}
	
	printf("\n Sorted list in ascending order:\n");
	
	for(i = 0; i < n; i++)
	   printf("%3d ", array[i]);
	   printf("\n\n\n");
	
	return 0;
}
