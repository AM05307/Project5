#include <stdio.h>
int main() {
	char name[80];
	int data;
	FILE *handle;
	printf("이름을 입력하세요:");
		fflush(stdout);
	scanf_s("%s", name,80);
	printf("번호를 입력하세요:");
		fflush(stdout);
	scanf_s("%d", &data);
	fopen_s(&handle,"test.dat", "wb");
	fwrite((char *)name, 80, 1, handle);
	fwrite((char *)&data, sizeof(4), 1, handle);
	fclose(handle);
	fopen_s(&handle,"test.dat", "rb");
	fread((char *)name, 80, 1, handle);
	fread((char *)&data, sizeof(data), 1, handle);
	printf("%s\n", name);
	printf("%d\n", data);
	fclose(handle);
	return 0;
}