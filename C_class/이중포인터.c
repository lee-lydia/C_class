#include <stdio.h>

int main(void)
{
	// ���� ������

	int a = 5;
	int* p = &a;
	int** p2 = &p;
	int*** p3 = &p2;

	printf("a: %d, *p : %d, **p2 : %d, ***p3 : %d\n", a, *p, **p2, ***p3);
	printf("a�� �ּ� : %p, p : %p, *p2 : %p, **p3 : %p\n", &a, p, *p2, **p3);
	printf("p�� �ּ� : %p, *");
	
	return 0;
}