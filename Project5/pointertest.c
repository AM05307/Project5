#include<stdio.h>
int main() {
	char name[80], address[80], code[80];
	char *p[3] = { name, address, code };
	printf("Input name:");
	scanf_s("%s", name, sizeof(name));

	printf("input address:");
	scanf_s("%s", address, sizeof(address));

	printf("input code:");
	scanf_s("%s", code, sizeof(code));
	printf("%s\n%s\n%s\n", p[0], p[1], p[2]);
	return  0;
}