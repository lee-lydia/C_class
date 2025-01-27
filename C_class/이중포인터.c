#include <stdio.h>

int main(void)
{
	// 이중 포인터

	int a = 5;
	int* p = &a;
	int** p2 = &p;
	int*** p3 = &p2;

	printf("a: %d, *p : %d, **p2 : %d, ***p3 : %d\n", a, *p, **p2, ***p3);
	printf("a의 주소 : %p, p : %p, *p2 : %p, **p3 : %p\n", &a, p, *p2, **p3);
	printf("p의 주소 : %p, *");
	
	return 0;
}