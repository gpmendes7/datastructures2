#include <stdio.h>

int extendendEuclid(int, int, int *, int *);

int main(){
	int a, b, d, x, y, temp;
	
	printf("\n\n I want to find the GCD of two numbers.\n\n");
	printf(" What are those numbers?\n ");
	scanf("%d%d", &a,&b);
	
	if(a < 0)
	   a = abs(a);
	   
	if(b < 0)
	   b = abs(b);
	   
	if(a < 0){
		temp = a;
		a = b;
		b = temp;
	}
	
	d = extendedEuclid(a,b, &x, &y);
	
	printf("\n GCD of %d and %d is %d. \n The coeficients are %d and %d.\n\n", a,b,d,x,y);
	
	return 0;
}

int extendedEuclid(int a, int b, int *x, int *y) {
	if(a == 0) {
	   *x = 0;
	   *y = 1;
	   return b;
	}
	
	int x1, y1;
	int gcd = extendedEuclid(b%a, a, &x1, &y1);
	
	*x = y1 - (b/a) * x1;
	*y = x1;
	
	return gcd;
}
