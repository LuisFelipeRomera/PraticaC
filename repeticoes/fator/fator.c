// This script calculates de factorial of a given number

#include<stdio.h>
#define MIN 1 // Defines the macro "MIN" = 1

int main(){

	int n, fat, i;

	scanf("%d", &n);

	i = MIN;

	fat = MIN;

	while(i <= n ) {
	
		fat *= i; // fat = fat * i;

		i++; // i = i + 1

	}

	printf("%d\n", fat);

	return 0;
}
