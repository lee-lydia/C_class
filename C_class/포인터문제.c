#include <stdio.h>

int main(void)
{
	// 변수와 포인터 변수를 만들어서
	// 변수에 들어있는 값 : 변수의 주소값 ( 4 : 1004 )

	int a = 4;
	int* ptr = &a;
	
	printf("%d : %p\n", *ptr, ptr);

	return 0;
}