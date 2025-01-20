#include <stdio.h>

int main(void)
{
	/*
	for (초기값1;조건식1;증감식1) { // n회 반복
		for (초기값2;조건식2;증감식2) { // m회 반복
			실행할 코드; // n*m회 반복
		}
	}
	*/
	
	// 1행 1열
	// 1행 2열
	//
	// 2행 1열
	// 2행 2열
	// ...

	int i, j;

	for (i = 1;i <= 3;i++) { // 바깥 반복문 : 1~3까지 증가 (행)
		for (j = 1;j <= 5;j++) { // 안쪽 반복문 : 1~5까지 증가 (열)
			printf("%d 행 %d 열\n", i, j); // 총 3 * 5 = 15회 반복
		}
		printf("\n");
	}

	return 0;
}