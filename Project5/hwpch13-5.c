#include <stdio.h>
#include <stdlib.h>
typedef struct node {
	struct node *next;
	int data;
} NODE;
int main() {
	int x;
	NODE *head = NULL, *p;

	while (1) {
		printf("data = ");
		scanf_s("%d", &x);
		if (x == -1) break;
			p = malloc(sizeof(NODE));
		p->next = head;  //p옆에 head을 넣고 
		head = p; // head에 p를 넣음 
		p->data = x;
	}
	p = head;
	while (p) {
		//---------------->목록 출력
			printf("%d\n", p->data);
		p = p->next;
	}
	return 0;
}