#include <stdio.h>

int main(void)
{
	// 배열 포인터 : 배열을 가리키는 포인터 변수
	/*
	자료형 배열명[m]={};
	자료형(*변수명)[m] = &배열명; // m개씩 자르겠다 -> 행 대표 주소 저장
	*/

	int a[3] = { 1,2,3 };
	int* ptr = a; // a[0]의 주소를 저장

	// 배열 포인터
	int arr[3] = { 1,2,3 };
	int(*arrptr)[3] = &arr; // arr 배열 자체의 주소를 가리킴
	printf("첫 번째 요소 : %d\n", (*arrptr)[0]);
	printf("두 번째 요소 : %d\n", (*arrptr)[1]);
	printf("세 번째 요소 : %d\n", (*arrptr)[2]);

	printf("\n");

	for (int i = 0;i < 3;i++) {
		printf("arr[%d] : %d\n", i, (*arrptr)[i]); // i 번째 주소를 역참조
	}

	return 0;
}