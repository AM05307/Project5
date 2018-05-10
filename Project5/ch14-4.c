#include <stdio.h>
int main() {
	long cp;
	char ch;
	FILE *p;
	fopen_s(&p,"a.txt", "r+t");
	if (p == NULL) {
		printf("파일이없습니다\n");
		return 0;
	};
	fseek(p, 3, SEEK_SET); // ---------->fseek는 파일의 현재  current pointer의 위치를 옮긴다
		ch = fgetc(p);
	cp = ftell(p);
	printf("%c,%ld\n", ch, cp);
	fseek(p, -5, SEEK_END);
	ch = fgetc(p);
	cp = ftell(p); //---->stream과 관련된 파일의 현재 위치의 위치 정보를 반환
		printf("%c,%ld\n", ch, cp);
	return 0;
}