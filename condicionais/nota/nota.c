#include<stdio.h>
int main() {

	int B, T;

	scanf("%d", &B);
	scanf("%d", &T);

	if ((((B + T) * 70) / 2) > 5600) {

		printf("1\n");

	} else if ((((B + T) * 70) / 2) < 5600) {

		printf("2\n");

	} else { 

		printf("0\n");
	}

	return 0;
}
