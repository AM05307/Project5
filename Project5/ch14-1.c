#include <stdio.h>
#include <stdlib.h>
int main() {
	FILE *out;

	fopen_s(&out,"test.txt", "r"); 
	if (out == NULL) {
			printf("������ ���� \n");
			return 0;
		}
	printf("���� ���� ���� \n");
	fclose(out);
	return 0;
}