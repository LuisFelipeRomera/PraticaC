// This script will return the mean of any n given numbers

#include<stdio.h>
int main(){

	int n, k, i;

	float total = 0;

	printf("number of objects\n");

	scanf("%d", &n);

	for( i = 0; i < n; i++){
	
		scanf("%d", &k);

		total += k;
	
	}

	float mean = total / n;

	printf("mean is %.2f\n", mean);

	return 0;
}

