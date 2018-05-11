// 파일 입출력 연습문제 
//친구들의 이름과 전화번호, 나이 정보를 갖는 구조체의 배열(최대 크기 100)을 선언하고, 
//사용자에게 메뉴를 보여주고 선택한 메뉴에 따라서 용도에 맞는 함수를 구현하여 수행되도록 하시오.
//[ 메뉴 : 1.친구정보입력  2.친구이름으로검색 3.파일로저장] 
//(프로그램 시작 시 이미 파일에 입력되어있는 정보가 있다면 그 정보를 읽어서 배열로 만들고,
//친구 정보가 새롭게 입력되면 배열의 마지막 요소 뒤로 정보가 저장되도록 한다.
//그리고 파일로 저장메뉴가 선택되면 현재 배열의 모든 친구 정보를 기존 파일의 내용을 지운 후에 
//저장되도록 한다.) 

#include<stdio.h>

//구조체 배열 선언 
typedef struct Friend
{
	char name[20];
	int tel;
	int age;
}f;
struct Friend flist[500]; //Frien 구조체를 500개 가지는 배열

int c; //메뉴 선택 변수


//함수선언
void friendInput();
void friendSearch();
void friendSave();

void main() {
	f *fr = malloc(sizeof(f)); //구조체 포인터 선언 

	printf("메뉴를 선택하세요.\n");
		printf("[ 메뉴 : 1.친구정보입력  2.친구이름으로검색 3.파일로저장]\n");
		scanf_s("%d", &c);
		printf("선택한 메뉴는 %d번 입니다.\n", c);

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
			printf("파일이 없습니다.");
		}
}

//1. 친구정보 입력 함수 
void friendInput() {
	printf("친구정보입력\n");

};

//2. 친구 이름으로 검색 함수 
void friendSearch() {
	printf("친구 이름으로 검색\n");
}

//3. 파일로 저장 함수 
void friendSave() {
	printf("파일로 저장\n");
}