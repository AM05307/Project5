#include<stdio.h>

void main() {
	FILE *f; //������ ����ü ����
	char c;
	fopen_s(&f, "input.txt", "r");  //������ �����Ͽ� �б��� ����
	while ((c= fread((f) != EOF)){
		putchar(c);
	}
};