//���� : strlen()�� ������� �ʰ� ���ڿ��� ���̸� ���ϴ� �Լ��� �����Ͻÿ�
//���� : ���ڿ��� �迭�� ���� ���� �迭�� ���̸� ���� 
//		�Է��� ���ڿ��� ��ġ�� �Լ��� �ѱ�
//������� : ������Է��� ���ڿ��� �Լ��� �迭�� �ѱ�°� ����� 
#include<stdio.h>
#include<string.h>
void count_a(char a);

int main() {
	char *a;
	char b[500] = {};
	printf("���ڿ��� �Է��Ͻÿ�.\n");
	scanf_s("%c", b);
	*a = &b;
	count_a(b);

	return 0;
}

void count_a(char b) {
	char b[] = {*&a };
	printf("%c %c %c\n", b[0], b[1], b[2]); //�迭b[]�� a �� �� ������ �׽�Ʈ 
	printf("���ڿ��� ���̴�  = %d\n", sizeof(b)); //�迭 b�� ����� ���
}