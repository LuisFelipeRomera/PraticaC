#include<stdio.h>
int main(){

	double slr, tax;

	scanf("%lf", &slr);

	if (slr >= 0.00 && slr <= 2000.00) {

		printf("Isento\n");

	} else if (slr >= 2000.01 && slr <= 3000.00) {

		tax = (slr - 2000.00) * 0.08;

	} else if (slr >= 3000.01 && slr <= 4500.00) {

		tax = (80 + (slr - 3000.00) * 0.18);

	} else {

		tax = (80 + 270 + (slr - 4500) * 0.28);

	}

	if (slr > 2000) {

		printf("R$ %.2lf\n", tax);

	}

	return 0;	
}
