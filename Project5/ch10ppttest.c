#include<stdio.h>

//����ü ����
struct info {
	char name[20];
	int grade;
	int k_jumsu;
	int e_jumsu;
	int m_jumsu;
}info;
// �Լ�����
	//����ڷκ��� �̸��� �г�, 3������ ������ �Է� �޴� �Լ�
void avgin(struct info *tp);

	//����ü�� �Ű������� �޾Ƽ� ����� ����Ͽ� �����ϴ� �Լ�
void avgcal(struct info *tp);



int main(void)
{	struct info stinfo; //����ü ���� ����
	
	avgin(&stinfo); // avgin �Լ��� ����ü ������ �ּ� ����
	avgcal(&stinfo); //avgcal �Լ��� ����ü ������ �ּ� ����
	return 0;
}

//����ڷκ��� �̸��� �г�, 3������ ������ �Է� �޴� �Լ�
void avgin(struct info *tp) {
	printf("�л� �̸��� �Է��ϼ���\n");
	scanf_s("%s", &info.name, sizeof(info.name));

	printf("�л��� �г��� �Է��ϼ���\n");
	scanf_s("%d",&info.grade);

	printf("���� ������ �Է��ϼ���\n");
	scanf_s("%d", &info.k_jumsu);

	printf("���� ������ �Է��ϼ���\n");
	scanf_s("%d", &info.e_jumsu);

	printf("���� ������ �Է��ϼ���\n");
	scanf_s("%d", &info.m_jumsu);

}

//����ü�� �Ű������� �޾Ƽ� ����� ����Ͽ� �����ϴ� �Լ�
void avgcal(struct info *tp) {
	int avg;
	printf("=============================\n");
	printf("�л� ������ ����� ����մϴ�.\n");

	avg = (info.k_jumsu + info.e_jumsu + info.m_jumsu) / 3;
	printf("%d�г� %s �л��� ��� ������ %d�� �Դϴ�\n", info.grade,info.name, avg);

};



