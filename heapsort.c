#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void heapify(int *, int);
void build_heap(int *, int);
void heapsort(int *, int);
void swap(int *, int *);
int heapsize;

int main() {
	int *arr, n, i;
	
	printf("\n How many numbers do you want to sort?\n");
	scanf("%d", &n);
	
	arr = (int*) malloc(sizeof(int)*n);
	
	printf("\n\n Enter %d numbers\n", n);
	for(i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	
	//heapsize = n;
	
	heapsort(arr, n);
	printf("\n\n The sorted array is \n\n");
	
	for(i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
	
	printf("\n\n\n");
	
	return 0;
}

void heapsort(int* arr, int len){
	int i;
	build_heap(arr, len);
	for(i = len-1; i>=1; i--){
		swap(&arr[0], &arr[i]);
		heapsize = heapsize - 1;
		heapify(arr, 0);
	}
}

void heapify(int *arr, int i){
   int l = 2*i, r=2*i+1, largest;
   if(l<heapsize && arr[l] > arr[i])
      largest = l;
   else
      largest = i;
   
   if(r<heapsize && arr[r] > arr[largest])
     largest = r;
   
   if(largest != i){
   	  swap(&arr[i], &arr[largest]);
   	  heapify(arr, largest);
   }	
}

void build_heap(int *arr, int len) {
	int i;
	heapsize = len;
	for(i = len/2; i>= 0; i--){
		heapify(arr, i);
	}
}

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
