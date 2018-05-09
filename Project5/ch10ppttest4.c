//3번에서 정의된 구조체를 사용하여 20명의 학생정보를 저장할 수 있는 배열을 선언하고 
//사용자로부터 정보를 입력 받는 함수와 학생의 이름으로 검색하여 
//학년, 3과목의 점수, 평균을 출력하여 주는 함수로 구성된 프로그램을 구현하시오. 

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
		printf("%d번째 학생 정보를 입력하시오. \n", i + 1);

		printf("학년 \n");
		scanf_s("%d", &std[i].grade);

		printf("이름 \n");
		scanf_s("%s", std[i].name, sizeof(std[i].name));

		printf("국어점수 \n");
		scanf_s("%d", &std[i].kor);

		printf("영어점수 \n");
		scanf_s("%d", &std[i].eng);

		printf("수학점수 \n");
		scanf_s("%d", &std[i].math);

	}
}
int show_menu() {
	int i;
	printf("메뉴를 선택하시오. \n");
	printf("1. 검색 \n");
	printf("2. 종료 \n");
	scanf_s("%d", &i);

	return i;
}
struct student search_std(struct student *p_std) {
	char s_name[20];
	printf("검색하고자 하는 학생 이름을 입력하시오. \n");
	scanf_s("%s", s_name, sizeof(s_name));

	for (int i = 0; i < 2; i++) {
		if (!strcmp(p_std[i].name, s_name)) {   //(!(똑같으면 0값 리턴)) => 1일경우 => 검색결과리턴
			return p_std[i];
		}
		else {
		}
	}

}

void show_std(struct student std) {
	std = get_avg(std);
	printf("이름 : %s\n", std.name);
	printf("학년 : %d\n", std.grade);
	printf("국어 점수는 %d \n", std.kor);
	printf("영어 점수는 %d \n", std.eng);
	printf("수학 점수는 %d \n", std.math);
	printf("평균 점수는 %f \n", std.avg);
}

int main()
{
	int menu;

	struct student std[2]; //구조체 배열 /학생 2명  
	struct student *p_std = std;
	struct student s_std;  //검색결과를 받는 변수 

	get_information(std);
	menu = show_menu();
	if (menu == 1) { // 메뉴 검색 선택시
		// 원래는 유효성 검사 코드 있어야됨.
		s_std = search_std(std);
	}
	else {
		printf("종료합니다. \n");
	}

	show_std(s_std);

	return 0;
}