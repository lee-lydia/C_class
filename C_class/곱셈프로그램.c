#include <stdio.h>

int multiply(int a, int b)
{
	return a * b;
}

int main(void)
{
	/*
	숫자 2가지를 가지고 곱셈하는 함수 생성
	숫자 2가지는 사용자가 입력
	곱하기 연산 결과 : 0 X 0 = 00 출력
	*/

	int value1, value2;
	printf("숫자 두 개를 입력하세요. ");
	scanf_s("%d %d", &value1, &value2);
	int result = multiply(value1, value2);

	printf("곱하기 연산 결과 : %d X %d = %d\n", value1, value2, result);

	return 0;
}