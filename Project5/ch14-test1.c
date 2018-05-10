#include<stdio.h>

void main() {
	FILE *inputfile; //input.txt파일의 구조체 변수
	char c;
	fopen_s(&inputfile, "input.txt", "r");  //파일을 오픈하여 읽기모드 지정
	if (inputfile == NULL) {
		printf("파일이 없습니다.\n");
	}
	else {
		printf("파일을 읽었습니다.\n");
	}

	fscanf_s(inputfile,"%s %d\n",name,al)


};