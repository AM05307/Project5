#include<stdio.h>
int main() {
	int a = 10, *p, **pp;
	p = &a;
	pp = &p;
	printf("%d  %d  %d\n ", a, *p, **pp);
	printf("*pp = %p \n", *pp);
	printf("self address :    %p  %p %p\n ", &a, &p, &pp);
	printf("pointer address :  %p  %p %p\n ", a, p, pp);
	return  0;
}