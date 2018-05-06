#include <stdio.h>
int main() {
	int kor = 0, eng = 0, tot = 0, mat = 0;
	double avg = 0.0;
	kor = 90;
	eng = 80;
	mat = 75;
	tot = kor + eng + mat;
	avg = tot / 3.0;

	printf("kor=%d eng=%d  mat=%d \n", kor, eng, mat);
	printf("tot=%d avg=%5.2f\n", tot, avg);
	return 0;
}