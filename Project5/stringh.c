#include<stdio.h>	
#include<string.h>

int main() {
	int a=888;
	
	int *src =&a;
	
	
	printf("%d\n",*src);

	return 0;
}