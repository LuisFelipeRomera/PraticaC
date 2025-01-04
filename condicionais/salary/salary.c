#include<stdio.h>
int main(){

double slr, nslr, inc, prc;

scanf ("%lf", &slr);

if (slr >= 0 && slr <= 400.00) {

	prc = 15;

} else if (slr > 400.00 && slr <= 800) {

	prc = 12;

} else if (slr > 800.00 && slr <= 1200.00) {

	prc = 10;

} else if (slr > 1200.00 && slr <= 2000.00) {

	prc = 7;

} else {

	prc = 4;

}

inc = slr * (prc / 100);
nslr = slr + inc;

printf ("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %.0lf %%\n", nslr, inc, prc); 

return 0;

}
