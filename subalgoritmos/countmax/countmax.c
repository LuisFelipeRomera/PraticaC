// This script will count the numbers in a range in increasing order

#include<stdio.h>

int max(int a, int b){ // This fuction returns the greater number

	if(a >= b)
	
		return a;

	 else 
	
		return b;
}

int min(int a, int b){ // This fuction returns the smaller number

	if(a <= b)
	
		return a;

	 else 
	
		return b;
}

int main(){

	int a, b, i;

	printf("Choose two numbers\n");

	scanf("%d %d", &a, &b);

	for( i = min(a, b); i <= max(a, b); i++){
	
		printf("%d\n", i);

	}

	return 0;
}
