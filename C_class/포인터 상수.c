#include <stdio.h>

int main(void)
{
	/*
	포인터 상수 : 포인터가 가리키는 메모리 공간의 값은 바꿀 수 있으나(역참조), 포인터가 가리키는 주소는 변경하지 못함.
	자료형* const 상수명 = &변수명; // 다른 변수를 참조할 수 없음.
	*/

	int x = 10, y = 20;
	int* const PTR = &x;
	printf("%d\n", *PTR);
	*PTR = 30;
	printf("%d\n", *PTR);
	// PTR = &y;

	return 0;
}