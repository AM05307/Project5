#include<stdio.h>
int main() {
	int p0 = 12345;
	int *p1;  //포인터
	int **p2; //이중포인터
	int ***p3; //삼중포인터
	int t1, t2, t3;

	p1 = &p0; //"int 형  주소를 "포인터"로 리턴
	p2 = &p1; //포인터"의 주소를 "이중 포인터"로 리턴
	p3 = &p2; //이중 포인터를 삼중 포인터로 

	t1 = *p1;
	t2 = **p2;
	t3 = ***p3;
	printf("t1=%d, t2=%d, t3=%d\n", t1, t2, t3); //전달받은 참조값을 출력
	return 0;
}