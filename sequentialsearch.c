#include <stdio.h>

int main(){
	int array[50];
	int search, n, i;
	
	printf("\n Enter the size of the array.\n");
	scanf("%d", &n);
	
	printf("\n Enter %d number(s).\n", n);
	
	for(i = 0; i < n; i++)
	   scanf("%d", &array[i]);
	   
    printf("\n Enter the number you want to search\n");
	scanf("%d", &search);
	printf("\n\n");
	   
	for(i = 0; i < n; i++){
		if(array[i] == search){
			printf(" Number %d is present at location %d in the array.\n", search, i);
			break;
		}
    }
    
    if(i == n){
       printf(" Program returned -1\n\n");
       printf(" %d is not present in the array!\n\n", search);
	}
		
	return 0;
}
