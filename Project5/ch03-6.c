#include <stdio.h>
int main() {
	int a = (int)90.9;
	float f = (float)97.9;
	printf("a=%d size=%d\n", a, sizeof(a));
	printf("f=%5.2f size=%d\n", f, sizeof(f));
	printf("90.9 is size= %d  97.9 is size=%d \n", sizeof(90.9), sizeof(97.9));
	return 0;
}