#include <stdio.h>

int main(void)
{
	// 2���� �迭�� ������ �� �������� ����غ�����

	int arr[8][9];

	for (int i = 0;i < 8;i++) {
		printf("%d��\n", i + 2);
		for (int j = 0;j < 9;j++) {
			arr[i][j] = (i+2) * (j+1);
			printf("%d * %d = %d\n", i+2, j+1, arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}