#include<stdio.h> 

int compare_str(char *str, char *str2) {
	int num;
	if (strlen(str) == strlen(str2)) {
		for (int i = 0; ; i++) {
			if (*(str + i) != *(str2 + i)) {
				if (*(str + i) > *(str2 + i)) {
					num = 1;
					break;
				}
				else {
					num = -1;
					break;
				}
			}
			else {
				if (*(str + i) != 0) {
					num = 0;
				}
				else {
					break;
				}
			}
		}
	}
	else {
		if (strlen(str) > strlen(str2)) {
			num = 1;
		}
		else {
			num = -1;
		}
	}
	return num;
}
int main() {
	char *str = "hello";
	char *str2 = "hello";
	int num;
	num = compare_str(str, str2);
	if (num == 0) {
		printf("두 문자열은 같습니다. \n");
	}
	else {
		printf("두 문자열은 같지 않습니다.\n");
	}
}