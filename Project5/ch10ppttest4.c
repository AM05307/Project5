//3������ ���ǵ� ����ü�� ����Ͽ� 20���� �л������� ������ �� �ִ� �迭�� �����ϰ� 
//����ڷκ��� ������ �Է� �޴� �Լ��� �л��� �̸����� �˻��Ͽ� 
//�г�, 3������ ����, ����� ����Ͽ� �ִ� �Լ��� ������ ���α׷��� �����Ͻÿ�. 

#include<stdio.h>
struct student {
	//char name[20];
	char *name;
	int grade;
	int kor;
	int eng;
	int math;
	double avg;

};

struct student get_avg(struct student std) {
	std.avg = (double)(std.kor + std.math + std.eng) / 3;

	return std;
}

void get_information(struct student *std) {
	for (int i = 0; i < 2; i++) {
		printf("%d��° �л� ������ �Է��Ͻÿ�. \n", i + 1);

		printf("�г� \n");
		scanf_s("%d", &std[i].grade);

		printf("�̸� \n");
		scanf_s("%s", std[i].name, sizeof(std[i].name));

		printf("�������� \n");
		scanf_s("%d", &std[i].kor);

		printf("�������� \n");
		scanf_s("%d", &std[i].eng);

		printf("�������� \n");
		scanf_s("%d", &std[i].math);

	}
}
int show_menu() {
	int i;
	printf("�޴��� �����Ͻÿ�. \n");
	printf("1. �˻� \n");
	printf("2. ���� \n");
	scanf_s("%d", &i);

	return i;
}
struct student search_std(struct student *p_std) {
	char s_name[20];
	printf("�˻��ϰ��� �ϴ� �л� �̸��� �Է��Ͻÿ�. \n");
	scanf_s("%s", s_name, sizeof(s_name));

	for (int i = 0; i < 2; i++) {
		if (!strcmp(p_std[i].name, s_name)) {   //(!(�Ȱ����� 0�� ����)) => 1�ϰ�� => �˻��������
			return p_std[i];
		}
		else {
		}
	}

}

void show_std(struct student std) {
	std = get_avg(std);
	printf("�̸� : %s\n", std.name);
	printf("�г� : %d\n", std.grade);
	printf("���� ������ %d \n", std.kor);
	printf("���� ������ %d \n", std.eng);
	printf("���� ������ %d \n", std.math);
	printf("��� ������ %f \n", std.avg);
}

int main()
{
	int menu;

	struct student std[2]; //����ü �迭 /�л� 2��  
	struct student *p_std = std;
	struct student s_std;  //�˻������ �޴� ���� 

	get_information(std);
	menu = show_menu();
	if (menu == 1) { // �޴� �˻� ���ý�
		// ������ ��ȿ�� �˻� �ڵ� �־�ߵ�.
		s_std = search_std(std);
	}
	else {
		printf("�����մϴ�. \n");
	}

	show_std(s_std);

	return 0;
}