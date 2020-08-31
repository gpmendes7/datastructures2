#include <stdio.h>

int main(){
	int n, array[100], c, d, temp;
	
	printf("\n Enter the size of the array:\n");
	scanf("%d", &n);
	
	printf("\n\nEnter the array elements \n");
	for(c = 0; c < n; c++) {
		scanf("%d", &array[c]);
	}
	
	for(c = 1; c <= n-1; c++) {
		d = c;
		
		while(d > 0 && array[d] < array[d-1]){
			temp = array[d];
			array[d] = array[d-1];
			array[d-1] = temp;	
			d--;
		}
	}
	
	printf("\n\n Sorted array in asceding order:\n\n");
	printf("");
	
	for(c = 0; c < n; c++) {
		printf("%d ", array[c]);
	} 
	
	printf("\n\n");	
	return 0;
}
