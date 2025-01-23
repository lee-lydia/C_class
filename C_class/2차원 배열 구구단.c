#include <stdio.h>

int main(void)
{
	// 2차원 배열을 선언한 후 구구단을 출력해보세요

	int arr[8][9];

	for (int i = 0;i < 8;i++) {
		printf("%d단\n", i + 2);
		for (int j = 0;j < 9;j++) {
			arr[i][j] = (i+2) * (j+1);
			printf("%d * %d = %d\n", i+2, j+1, arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}