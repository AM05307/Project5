#include<stdio.h>

//구조체 선언
struct info {
	char name[20];
	int grade;
	int k_jumsu;
	int e_jumsu;
	int m_jumsu;
}info;
// 함수선언
	//사용자로부터 이름과 학년, 3과목의 점수를 입력 받는 함수
void avgin(struct info *tp);

	//구조체를 매개변수로 받아서 평균을 계산하여 저장하는 함수
void avgcal(struct info *tp);



int main(void)
{	struct info stinfo; //구조체 변수 선언
	
	avgin(&stinfo); // avgin 함수에 구조체 변수의 주소 전달
	avgcal(&stinfo); //avgcal 함수에 구조체 변수의 주소 전달
	return 0;
}

//사용자로부터 이름과 학년, 3과목의 점수를 입력 받는 함수
void avgin(struct info *tp) {
	printf("학생 이름을 입력하세요\n");
	scanf_s("%s", &info.name, sizeof(info.name));

	printf("학생의 학년을 입력하세요\n");
	scanf_s("%d",&info.grade);

	printf("국어 점수를 입력하세요\n");
	scanf_s("%d", &info.k_jumsu);

	printf("영어 점수를 입력하세요\n");
	scanf_s("%d", &info.e_jumsu);

	printf("수학 점수를 입력하세요\n");
	scanf_s("%d", &info.m_jumsu);

}

//구조체를 매개변수로 받아서 평균을 계산하여 저장하는 함수
void avgcal(struct info *tp) {
	int avg;
	printf("=============================\n");
	printf("학생 점수의 평균을 계산합니다.\n");

	avg = (info.k_jumsu + info.e_jumsu + info.m_jumsu) / 3;
	printf("%d학년 %s 학생의 평균 점수는 %d점 입니다\n", info.grade,info.name, avg);

};



