#include<stdio.h>

void main() {
	FILE *inputfile; //input.txt������ ����ü ����
	char c;
	fopen_s(&inputfile, "input.txt", "r");  //������ �����Ͽ� �б��� ����
	if (inputfile == NULL) {
		printf("������ �����ϴ�.\n");
	}
	else {
		printf("������ �о����ϴ�.\n");
	}

	fscanf_s(inputfile,"%s %d\n",name,al)


};