#include<stdio.h>
int main() {
	int *p[2], data[2][3] = { { 10, 20, 30 },{ 40, 50, 60 } };

	p[0] = data[0];
	p[1] = data[1];

	printf("%d %d %d\n", *p[0], *(p[0] + 1), *(p[0] + 2));
	printf("%d %d %d\n", *p[1], *(p[1] + 1), *(p[1] + 2));
	return  0;
}