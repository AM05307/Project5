#include <stdio.h>

typedef struct f_riend {
	char name[20];
	char phoneno[20];
	int age;
} FRIEND;

void showmenu() {
	printf("메뉴를 선택하시오. \n");
	printf("1. 친구 정보 입력 \n");
	printf("2. 친구 이름으로 검색 \n");
	printf("3. 파일로 저장\n");
	printf("4. 종료. \n");
}

void insert_friend(FRIEND *f_list, int *pcnt) { //구조체 배열의 주소, 배열이 몇번째인지
	int cnt = *pcnt; //메인에서 몇번째까지 입력됐는지 값을 다시 받음
	printf("이름을 입력하시오.\n");
	scanf_s("%s", f_list[cnt].name, sizeof(f_list[cnt].name));

	printf("전화번호를 입력하시오.\n");
	scanf_s("%s", f_list[cnt].phoneno, sizeof(f_list[cnt].phoneno));

	printf("나이를 입력하시오.\n");
	scanf_s("%d", &f_list[cnt].age, sizeof(f_list[cnt].age));

	(*pcnt)++; //다음 입력을 위해 배열인덱스 증가시킴 cnt를 직접받으면 main에서 cnt가 증가하지 않음 
	//포인터로 call by ref 로 받아야 main도 증가 

}

void search_friend(FRIEND *f_list, int *pcnt) {
	char s_name[20];  //검색할 이름을 받은 배열
	printf("검색할 이름을 입력하시오. \n");
	scanf_s("%s", s_name, sizeof(s_name));  //검색할 이름 받음 

	for (int i = 0; i < *pcnt; i++) {  //구조체 배열에 pcnt만큼 입력되어있음 
		if (!strcmp(s_name, f_list[i].name)) { //검색한이름과 구조체배열의 name 비교후 일치하면 출력 
			printf("이름 : %s \n", f_list[i].name);
			printf("전화번호 : %s \n", f_list[i].phoneno);
			printf("나이 : %d \n", f_list[i].age);
		}
	}
}

void save_file() {  

}

int main() {
	int menu; //메뉴 번호 받는 변수 
	FRIEND f_list[100];  // 친구 리스트 구조체 배열
	int cnt = 0;  // 자료 하나 입력하면 구조체배열 0번에 입력. 그다음은 1번에 입력
	int *pcnt = &cnt; // 왜 포인터로 다시 받았는지 : cnt를 다시 받으면 cnt가 복사됨
	// 처음부터 인자를 업데이트 하려고 포인터 사용

	while (1) { ///while(1) 무한루프
		showmenu();   //메뉴출력
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
		default:  //다른 메뉴 선택시 
			printf("올바른 메뉴를 선택하시오.");
		}
	}
}