#include <stdio.h>

int main(void)
{
	// 10 10.0
	/*
	bit : 데이터를 저장하거나 표현할 수 있는 가장 작은 단위 (1 bit : 0 또는 1, 하나의 상태만 저장)
	* 8 bits = 1 byte : 256 가지의 상태 표현 가능 (0~255)
	-> 1 bit, 2 bit, 3 bit, ... 표현 가능 상태값 증가
	
	* char : 1 byte | %c
				값의 범위: signed(-128~127) - 최상위비트(부호비트)로 부호 판단(0: 양수/ 1: 음수)
								unsigned(0~255)
	* short : 2 byte | %d
	* int : 4 byte | %d
	* long : 4 byte | %ld
	* long long : 8 byte | %lld
	* float : 4byte | %f
	* double : 8byte | %lf
	* long double : 8 byte 이상 | %llf
	
	unsigned char : %u
	unsigned long : %lu
	unsinged long long : %llu

	long long max_number = 2200000000;
	printf("%lld", max_number);

	*/

	unsigned int max_number = 2200000000;
	printf("%u\n", max_number);


	// sizeof() 연산자: 값 혹은 자료형의 크기 확인 가능

	int num1 = 1;
	printf("%d\n", sizeof(num1));

	printf("%d\n", sizeof(100));

	printf("%d\n", sizeof(3.14)); // double형의 크기로 출력
	printf("%d\n", sizeof(3.14f));

	printf("%d\n", sizeof(int));

	printf("%d\n", sizeof(float));

	printf("%d\n", sizeof(short));

	return 0;
}