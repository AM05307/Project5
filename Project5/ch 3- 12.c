#include<stdio.h>
int main() {
	int a = 10, b = 20;
	int Area = 0, Girth = 0;
	Area = a * b;
	Girth = (2 * a) + (2 * b);

	printf("Area= %5d\n", Area);
	printf("Girth= %5d\n", Girth);
	return 0;
}