#include <stdio.h>
int main() {
	long cp;
	char ch;
	FILE *p;
	fopen_s(&p,"a.txt", "r+t");
	if (p == NULL) {
		printf("�����̾����ϴ�\n");
		return 0;
	};
	fseek(p, 3, SEEK_SET); // ---------->fseek�� ������ ����  current pointer�� ��ġ�� �ű��
		ch = fgetc(p);
	cp = ftell(p);
	printf("%c,%ld\n", ch, cp);
	fseek(p, -5, SEEK_END);
	ch = fgetc(p);
	cp = ftell(p); //---->stream�� ���õ� ������ ���� ��ġ�� ��ġ ������ ��ȯ
		printf("%c,%ld\n", ch, cp);
	return 0;
}