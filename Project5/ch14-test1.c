#include<stdio.h>

void main() {
	FILE *f; //파일의 구조체 변수
	char c;
	fopen_s(&f, "input.txt", "r");  //파일을 오픈하여 읽기모드 지정
	while ((c= fread((f) != EOF)){
		putchar(c);
	}
};