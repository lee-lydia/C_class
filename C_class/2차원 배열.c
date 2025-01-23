#include <stdio.h>

int main(void)
{
	// 다차원 배열 : 2차원 이상의 배열
	// 1차원 배열: 선형적 구조, 2차원 배열: 평면 구조, 3차원 배열: 직육면체 구조, ...
	// 자료형 변수명[m][n];
	// m: 행, n: 열 (행 고정, 열 돌리고... 순으로 메모리 공간 할당)

	int a[3][4] = { {10} };
	// a[0][0] = 10; // 나머지 공간은 0
	printf("%d\n",a[0][0]);

	int arr[3][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};

	for (int i = 0;i < 3;i++) { // 행을 도는 for문
		for (int j = 0;j < 4;j++) { // 열을 도는 for문
			printf("arr[%d][%d] = %d\t", i, j, arr[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 4;j++) {
			arr[i][j] = 10;
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}