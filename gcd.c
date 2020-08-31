#include <stdio.h>

int Euclid(int, int);

int main(){
	int a, b, gcd;
	
	printf("\n\n I want to find the GCD of two numbers.\n\n");
	printf(" What are those numbers?\n ");
	scanf("%d%d", &a,&b);
	
	gcd = Euclid(a,b);
	
	printf("\n------------------------------\n");
	printf(" GCD of %d and %d is %d", a,b,gcd);
	printf("\n------------------------------\n");
	
	return 0;
}

int Euclid(int a, int b) {
	int temp;
	if(a < 0)
	   a = abs(a);
	if(b < 0)
	   b = abs(b);
	   
	if(a < 0){
		temp = a;
		a = b;
		b = temp;
	}
	
	if(b == 0)
	   return a;
	else
	   Euclid(b,a%b);
}
