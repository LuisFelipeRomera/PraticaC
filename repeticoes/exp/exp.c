// This script will give permit the user to use a exponential function

#include<stdio.h>

int main(){

	int a, b, i, exp;

	printf("choose the base\n");

	scanf("%d", &a);

	printf("choose the exponent\n");

	scanf("%d", &b);

	exp = a;

	for( i = 1; i < b; i++){
	
		exp = exp * a;

	}

	printf("%d\n", exp);

	return 0;
}
