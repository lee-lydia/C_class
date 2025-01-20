#include <stdio.h>

int main(void)
{
	/*
	for (초기값;조건식;증감식) {
		조건이 참이라면 실행할 코드;
	}
	*/
	
	int i;
	for (i = 1;i <= 10;i++) {
		printf("for문 반복 %d 번째\n", i);
	}
	printf("\n");

	int j;
	for (j = 10;j > 0;j--) {
		printf("%d\n", j);
	}
	printf("\n");

	for (int k = 1;k <= 10;k++) {
		printf("%d 의 제곱 : %d\n", k, k * k);
	}
	
	return 0;
}