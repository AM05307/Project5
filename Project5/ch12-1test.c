// ���� ����� �������� 
//ģ������ �̸��� ��ȭ��ȣ, ���� ������ ���� ����ü�� �迭(�ִ� ũ�� 100)�� �����ϰ�, 
//����ڿ��� �޴��� �����ְ� ������ �޴��� ���� �뵵�� �´� �Լ��� �����Ͽ� ����ǵ��� �Ͻÿ�.
//[ �޴� : 1.ģ�������Է�  2.ģ���̸����ΰ˻� 3.���Ϸ�����] 
//(���α׷� ���� �� �̹� ���Ͽ� �ԷµǾ��ִ� ������ �ִٸ� �� ������ �о �迭�� �����,
//ģ�� ������ ���Ӱ� �ԷµǸ� �迭�� ������ ��� �ڷ� ������ ����ǵ��� �Ѵ�.
//�׸��� ���Ϸ� ����޴��� ���õǸ� ���� �迭�� ��� ģ�� ������ ���� ������ ������ ���� �Ŀ� 
//����ǵ��� �Ѵ�.) 

#include<stdio.h>

//����ü �迭 ���� 
typedef struct Friend
{
	char name[20];
	int tel;
	int age;
}f;
struct Friend flist[500]; //Frien ����ü�� 500�� ������ �迭

int c; //�޴� ���� ����


//�Լ�����
void friendInput();
void friendSearch();
void friendSave();

void main() {
	f *fr = malloc(sizeof(f)); //����ü ������ ���� 

	printf("�޴��� �����ϼ���.\n");
		printf("[ �޴� : 1.ģ�������Է�  2.ģ���̸����ΰ˻� 3.���Ϸ�����]\n");
		scanf_s("%d", &c);
		printf("������ �޴��� %d�� �Դϴ�.\n", c);

		switch (c)
		{
		case 1: friendInput(c);
			break;

		case 2: friendSearch(c);
			break;

		case 3: friendSave(c);
			break;
		default:
			break;
		}
		
		

		fopen_s(&f,"friend.txt", "r+");
		if (&f == NULL) {
			printf("������ �����ϴ�.");
		}
}

//1. ģ������ �Է� �Լ� 
void friendInput() {
	printf("ģ�������Է�\n");

};

//2. ģ�� �̸����� �˻� �Լ� 
void friendSearch() {
	printf("ģ�� �̸����� �˻�\n");
}

//3. ���Ϸ� ���� �Լ� 
void friendSave() {
	printf("���Ϸ� ����\n");
}