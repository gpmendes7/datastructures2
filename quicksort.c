#include <stdio.h>

void quicksort(int [], int, int);

int main() {
	int x[20], n, i;
	
	printf("Enter size of the array: ");
	scanf("%d", &n);
	
	printf("\n");
	
	printf("Enter %d elements: ", n);
	for(i=0; i<n; i++)
	   scanf("%d", &x[i]);
	   
	quicksort(x, 0, n-1);
	printf("\n");
	
	printf("Sorted elements: ");
	for(i=0; i<n;i++)
	   printf(" %d", x[i]);
	   
	printf("\n");
	
	return 0;
}

void quicksort(int x[], int first, int last) {
	int pivot, j, temp, i;
	
	if(first < last) {
		pivot = first;
		i = first;
		j = last;
	
		while(i < j) {
			while(x[i] <= x[pivot] && i < last)
			     i++;
			while(x[j] > x[pivot])
			     j--;
			if(i < j){
				temp = x[i];
				x[i] = x[j];
				x[j] = temp;
			}
		}
		
		temp = x[pivot];
		x[pivot] = x[j];
		x[j] = temp;
		quicksort(x, first, j-1);
		quicksort(x, j+1, last);
   }
}
