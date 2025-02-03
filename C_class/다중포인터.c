#include <stdio.h>

int main(void)
{
	// 다중 포인터 : * 연산자가 두 개 이상 붙는, 포인터의 포인터, 더블포인터의 포인터 등의 포인터 변수

	int a = 5;
	int* p = &a; // 싱글포인터
	int** p2 = &p; // 더블(이중) 포인터
	int*** p3 = &p2;

	printf("a: %d, *p : %d, **p2 : %d, ***p3 : %d\n", a, *p, **p2, ***p3);
	printf("a의 주소 : %p, p : %p, *p2 : %p, **p3 : %p\n", &a, p, *p2, **p3);
	
	return 0;
}