//[����] �Լ��� �Ű������� phone����ü�� �����͸� �Ѱܼ� ����� ���� �Է¹ް�, ����ϴ� ���α׷�

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
	printf("�̸��� �Է��Ͽ��ֽʽÿ� : ");
	gets(tp->name);

	printf("��ȭ��ȣ�� �Է��Ͽ��ֽʽÿ� : ");
	gets(tp->phoneno);
}
void showphone(const struct phone *tp)
{
	puts(tp->name);
	puts(tp->phoneno);
}