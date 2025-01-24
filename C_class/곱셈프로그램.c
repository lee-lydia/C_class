#include <stdio.h>

int multiply(int a, int b)
{
	return a * b;
}

int cmp(int a, int b)
{
	return a > b ? a : b;
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

	/*
	두 가격 중 더 큰 값을 반환하는 함수
	딸기 가격 입력받고 귤 가격을 입력받아서, 더 비싼 과일의 가격을 출력
	*/

	int straw, man, result_cmp;
	printf("딸기의 가격을 입력해주세요. ");
	scanf_s("%d", &straw);
	printf("귤의 가격을 입력해주세요. ");
	scanf_s("%d", &man);

	result_cmp = cmp(straw, man);
	
	if (result_cmp == straw) {
		printf("딸기가 ");
	}
	else {
		printf("귤이 ");
	}
	printf("%d원으로 더 비쌉니다.\n", result_cmp);

	return 0;
}