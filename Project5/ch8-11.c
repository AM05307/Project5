#include<stdio.h>
int main() {
	int my_array[2][3][4] = {
		{ { 1, 2, 3, 4, },{ 5, 6, 7, 8, },{ 9, 10, 11, 12, } },
	{ { 13, 14, 15, 16, },{ 17, 18 ,19, 20 },{ 21, 22, 23, 24, } }
	};

	int  * b; // int ���� ��ü�� ����Ű�� ������
	int(*c)[4]; // 4 ���� ��� (int ��)�� ���� �迭�� ����Ű�� ������
	int(*d)[3][4]; // 3 �� 4 �� ��� (int ��)�� ���� �迭�� ����Ű�� ������

	int a1, a2, a3;

	b = my_array[1][2]; //my_array[1][2] = {21,22,23,24,} �迭�� ���� �ּҸ� b�� ���� 
	c = my_array[1]; //my_array[1] = {{13,14,15,16,}, {17,18,19,20,}, {21,22,23,24,}}
	d = my_array; //3 ���� �迭 my_array�� ����Ű�� �ּҸ� d�� ����

	a1 = b[3]; // my_array[1][2][3] 
	a2 = c[1][2]; // my_array[1][1][2] 
	a3 = d[0][1][2]; //  my_array[0][1][2] 

	printf("my_array [1] [2] [3] = % d \n", my_array[1][2][3]);
	printf("a1 = %d, a2 = %d, a3 = %d \n", a1, a2, a3);
	return  0;
}