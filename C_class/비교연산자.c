#include <stdio.h>

int main(void)
{
	// 비교 연산자 : 대소, 등가 관계를 검사하는 연산자
	/*
	a > b (a가 b보다 크다)
	a < b (a가 b보다 작다)
	a >= b (a가 b보다 크거나 같다)
	a <= b (a가 b보다 작거나 같다)
	a == b (a와 b는 같다)
	a != b (a와 b는 다르다)
	
	참 거짓 판단 가능 -> 참(TRUE): 1, 거짓(FALSE): 0
	*/

	int a = 1, b = 10;

	printf("a > b : %d\n", a > b);
	printf("a < b : %d\n", a < b);
	printf("a >= b : %d\n", a >= b);
	printf("a <= b : %d\n", a <= b);
	printf("a == b : %d\n", a == b);
	printf("a != b : %d\n", a != b);

	return 0;
}