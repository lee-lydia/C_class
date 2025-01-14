#include <stdio.h>

int main(void)
{
	// 증감 연산자(단항연산자): 변수에 저장된 값을 1만큼 증가시키거나 (증가 연산자) 1만큼 감소시킬 때 사용하는 (감소 연산자) 연산자
	/*
	++ (증가 연산자) : ++변수 (전위, prefix), 변수++(후위, postfix)
	-- (감소 연산자) : --변수 (전위, prefix), 변수-- (후위, postfix)

	전위: 증감 먼저 진행 후 나머지 실행, 후위: 나머지 먼저 실행 후 증감 진행
	*/

	int putA = 10, putB = 20;
	printf("A : %d\n",putA); // putA=10, 10 출력
	printf("A : %d\n", ++putA); // putA=11, 11 출력
	printf("A : %d\n", putA++); // 11 출력, putA=12
	printf("A : %d\n", putA); // putA=12, 12출력

	printf("B : %d\n", putB); // putB=20, 20 출력
	printf("B : %d\n", ++putB); // putB=21, 21 출력
	printf("B : %d\n", putB++); // 21 출력, putB=22
	printf("B : %d\n", putB); // putB=22, 22출력

	return 0;
}