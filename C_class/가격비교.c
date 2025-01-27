#include <stdio.h>

int cmp(int a, int b)
{
	return a > b ? a : b;
}

int main(void)
{
	/*
	두 가격 중 더 큰 값을 반환하는 함수
	딸기 가격 입력받고 귤 가격을 입력받아서, 더 비싼 과일의 가격을 출력
	*/

	int straw, man, result_cmp, diff;
	printf("딸기의 가격을 입력해주세요. ");
	scanf_s("%d", &straw);
	printf("귤의 가격을 입력해주세요. ");
	scanf_s("%d", &man);

	result_cmp = cmp(straw, man);

	if (result_cmp == straw) {
		printf("딸기가 ");
		diff = straw - man;
	}
	else {
		printf("귤이 ");
		diff = man - straw;
	}
	printf("%d원으로, %d 원 더 비쌉니다.\n", result_cmp, diff);

	return 0;
}