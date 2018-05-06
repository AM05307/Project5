#include <stdio.h>
int main() {
	int a = 200, b = 100;
	int hap = 0, sub = 0, mul = 0, div = 0;
	hap = a + b;
	sub = a - b;
	mul = a * b;
	div = a / b;
	printf(" %d + %d  = %d \n", a, b, hap);
	printf(" %d - %d  = %d \n", a, b, sub);
	printf(" %d * %d  = %d \n", a, b, mul);
	printf(" %d / %d  = %d \n", a, b, div);
	return 0;
}