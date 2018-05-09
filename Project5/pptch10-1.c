//문제 : strlen()을 사용하지 않고 문자열의 길이를 구하는 함수를 구현하시오
//접근 : 문자열을 배열에 넣은 다음 배열의 길이를 리턴 
//		입력한 문자열의 위치를 함수에 넘김
//어려운점 : 사용자입력한 문자열을 함수에 배열로 넘기는게 어려움 
#include<stdio.h>
#include<string.h>
void count_a(char a);

int main() {
	char *a;
	char b[500] = {};
	printf("문자열을 입력하시오.\n");
	scanf_s("%c", b);
	*a = &b;
	count_a(b);

	return 0;
}

void count_a(char b) {
	char b[] = {*&a };
	printf("%c %c %c\n", b[0], b[1], b[2]); //배열b[]에 a 가 잘 들어갔는지 테스트 
	printf("문자열의 길이는  = %d\n", sizeof(b)); //배열 b의 사이즈를 출력
}