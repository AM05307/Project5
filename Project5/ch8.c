// ��°���� ���ÿ�.	
#include<stdio.h>
int main() {
	char p0 = 777;
	char *p1;  //������
	int **p2; //����������
	int ***p3; //����������
	int t1, t2, t3;

	p1 = &p0; //"int ��  �ּҸ� "������"�� ����
	p2 = &p1; //������"�� �ּҸ� "���� ������"�� ����
	p3 = &p2; //���� �����͸� ���� �����ͷ� 

	t1 = *p1;
	t2 = **p2;
	t3 = ***p3;
	printf("t1=%d, t2=%d, t3=%d\n", t1, t2, t3); //���޹��� �������� ���
	return 0;
}