//[예제] 함수의 매개변수로 phone구조체의 포인터를 넘겨서 멤버의 값을 입력받고, 출력하는 프로그램

#include <stdio.h>

struct phone { char name[21];  char phoneno[21]; };

void makephone(struct phone *tp);
void showphone(const struct phone *tp);

int main(void)
{
	struct phone myphone;

	makephone(&myphone);
	showphone(&myphone);

	return 0;
}
void makephone(struct phone *tp)
{
	printf("이름을 입력하여주십시오 : ");
	gets(tp->name);

	printf("전화번호를 입력하여주십시오 : ");
	gets(tp->phoneno);
}
void showphone(const struct phone *tp)
{
	puts(tp->name);
	puts(tp->phoneno);
}