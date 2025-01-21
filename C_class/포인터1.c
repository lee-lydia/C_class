#include <stdio.h>

int main(void)
{
	// 주소 가져오기 : 변수의 주소를 얻으려면 &를 사용해서 가져올 것
	// 주소 따라가기 : 포인터를 통해 주소 안의 데이터에 접근하려면 *을 통해 접근
	// 주소 : 1 byte 마다 주소값 존재

	int a = 10;
	double b = 3.14;
	
	int* p = &a; // 주소 저장
	// 32 bit 컴퓨터 - 0 ~ (2^32 - 1) 까지의 주소 (4byte ∽ int)
	// 64 bit 컴퓨터 - 0 ~ (2^64 - 1) 까지의 주소 (8byte ∽ double)

	printf("%p\n", &a); // %p : 주소의 형식문자
	printf("%d %p", *p, p);

	return 0;
}