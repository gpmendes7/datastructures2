#include <stdio.h>

int main(){
	int array[100];
	int n, i, d;
	int position, swap;
	
	printf("\n Enter the size of the array.\n");
	scanf("%d", &n);
	
	printf("\n Enter %d integers.\n", n);
	
	for(i = 0; i < n; i++)
	   scanf("%d", &array[i]);
	   
	for(i = 0; i < (n-1); i++){
		position = i;
		
		for(d = i + 1; d < n; d++){
			if(array[position] > array[d])
			   position = d;
		}
		
		if(position != i){
		  	swap = array[i];
			array[i] = array[position];
			array[position] = swap;	
		}
	}
	
	printf("\n Sorted list in ascending order:\n");
	
	for(i = 0; i < n; i++)
	   printf("%3d ", array[i]);
	   printf("\n\n\n");
	
	return 0;
}
