#include <stdio.h>

int main(void)
{
	/*
	�ڷ��� ������ = �ʱⰪ;
	while (����) {
		�ݺ���Ű���� �ϴ� �ڵ�;
		������;
	}
	*/

	int c_class = 1;
	while (c_class <= 10) {
		printf("c��� ���� %d\n", c_class++);
	}

	printf("\n");

	// while���� if���� Ȱ���� 6���� �� ���
	int count=1;

	while (count <= 10) {
		printf("%d\n", 6 * count);
		count++;
	}

	printf("\n");

	int count2 = 1;

	while (count2 <= 60) {
		if (count2 % 6 == 0) {
			printf("%d\n",count2);
		}
		count2++;
	}

	return 0;
}