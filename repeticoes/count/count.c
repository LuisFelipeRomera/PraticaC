// This script will count between two selected numbers.

#include<stdio.h>
int main(){

	int m, n, i;

	scanf( "%d %d", &m, &n);

	if( m < n){

	for( i = m; i <= n; i++){ // increasing order
	
		printf("%d\n", i);
	
		}

	} else {
	
		for ( i = m; i >= n; i--){ // decreasing order
		
			printf("%d\n", i);
		
		}
	
	}

	return 0;
}
