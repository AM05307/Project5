#include<stdio.h>
int main() {
	int ar[2][3] = { { 10, 20, 30 },
	{ 40, 50, 60 } };
	int *p = ar[0];
	int i, j;
	for (i = 0; i < (sizeof(ar) / sizeof(ar[0])); i++) {
		for (j = 0; j < (sizeof(ar[0]) / sizeof(ar[0][0])); j++) {
			printf(" %d ", *p);
			p++;
		}
		printf("\n");
	}
	p -= 6;
	printf("=========================================\n");
	for (i = 0; i < (sizeof(ar) / sizeof(ar[0])); i++) {
		for (j = 0; j < (sizeof(ar[0]) / sizeof(ar[0][0])); j++) {
			printf(" %d ", *(p + (i + j)));
		}
		printf("\n");
	}
	return  0;
}