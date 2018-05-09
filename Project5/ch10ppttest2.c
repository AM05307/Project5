//[문제]
//3번에서 정의된 구조체를 사용하여 20명의 학생정보를 저장할 수 있는 배열을 선언하고 
//사용자로부터 정보를 입력 받는 함수와 학생의 이름으로 검색하여 
//학년, 3과목의 점수, 평균을 출력하여 주는 함수로 구성된 프로그램을 구현하시오.


#include<stdio.h>

//구조체 선언
struct info {
	char name[20];
	int grade;
	int k_jumsu;
	int e_jumsu;
	int m_jumsu;
}info;