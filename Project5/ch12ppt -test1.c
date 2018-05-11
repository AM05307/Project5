#include <stdio.h>

typedef struct f_riend {
	char name[20];
	char phoneno[20];
	int age;
} FRIEND;

void showmenu() {
	printf("�޴��� �����Ͻÿ�. \n");
	printf("1. ģ�� ���� �Է� \n");
	printf("2. ģ�� �̸����� �˻� \n");
	printf("3. ���Ϸ� ����\n");
	printf("4. ����. \n");
}

void insert_friend(FRIEND *f_list, int *pcnt) { //����ü �迭�� �ּ�, �迭�� ���°����
	int cnt = *pcnt; //���ο��� ���°���� �Էµƴ��� ���� �ٽ� ����
	printf("�̸��� �Է��Ͻÿ�.\n");
	scanf_s("%s", f_list[cnt].name, sizeof(f_list[cnt].name));

	printf("��ȭ��ȣ�� �Է��Ͻÿ�.\n");
	scanf_s("%s", f_list[cnt].phoneno, sizeof(f_list[cnt].phoneno));

	printf("���̸� �Է��Ͻÿ�.\n");
	scanf_s("%d", &f_list[cnt].age, sizeof(f_list[cnt].age));

	(*pcnt)++; //���� �Է��� ���� �迭�ε��� ������Ŵ cnt�� ���������� main���� cnt�� �������� ���� 
	//�����ͷ� call by ref �� �޾ƾ� main�� ���� 

}

void search_friend(FRIEND *f_list, int *pcnt) {
	char s_name[20];  //�˻��� �̸��� ���� �迭
	printf("�˻��� �̸��� �Է��Ͻÿ�. \n");
	scanf_s("%s", s_name, sizeof(s_name));  //�˻��� �̸� ���� 

	for (int i = 0; i < *pcnt; i++) {  //����ü �迭�� pcnt��ŭ �ԷµǾ����� 
		if (!strcmp(s_name, f_list[i].name)) { //�˻����̸��� ����ü�迭�� name ���� ��ġ�ϸ� ��� 
			printf("�̸� : %s \n", f_list[i].name);
			printf("��ȭ��ȣ : %s \n", f_list[i].phoneno);
			printf("���� : %d \n", f_list[i].age);
		}
	}
}

void save_file() {  

}

int main() {
	int menu; //�޴� ��ȣ �޴� ���� 
	FRIEND f_list[100];  // ģ�� ����Ʈ ����ü �迭
	int cnt = 0;  // �ڷ� �ϳ� �Է��ϸ� ����ü�迭 0���� �Է�. �״����� 1���� �Է�
	int *pcnt = &cnt; // �� �����ͷ� �ٽ� �޾Ҵ��� : cnt�� �ٽ� ������ cnt�� �����
	// ó������ ���ڸ� ������Ʈ �Ϸ��� ������ ���

	while (1) { ///while(1) ���ѷ���
		showmenu();   //�޴����
		scanf_s("%d", &menu);

		switch (menu) {
		case 1:
			insert_friend(f_list, pcnt);
			break;
		case 2:
			search_friend(f_list, pcnt);
			break;
		case 3:
			save_file();
			break;
		case 4:
			return 0;
		default:  //�ٸ� �޴� ���ý� 
			printf("�ùٸ� �޴��� �����Ͻÿ�.");
		}
	}
}