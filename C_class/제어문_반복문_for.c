#include <stdio.h>

int main(void)
{
	/*
	for (�ʱⰪ;���ǽ�;������) {
		������ ���̶�� ������ �ڵ�;
	}
	*/
	
	int i;
	for (i = 1;i <= 10;i++) {
		printf("for�� �ݺ� %d ��°\n", i);
	}
	printf("\n");

	int j;
	for (j = 10;j > 0;j--) {
		printf("%d\n", j);
	}
	printf("\n");

	for (int k = 1;k <= 10;k++) {
		printf("%d �� ���� : %d\n", k, k * k);
	}
	
	return 0;
}