#include <stdio.h>

int cmp(int a, int b)
{
	return a > b ? a : b;
}

int main(void)
{
	/*
	�� ���� �� �� ū ���� ��ȯ�ϴ� �Լ�
	���� ���� �Է¹ް� �� ������ �Է¹޾Ƽ�, �� ��� ������ ������ ���
	*/

	int straw, man, result_cmp, diff;
	printf("������ ������ �Է����ּ���. ");
	scanf_s("%d", &straw);
	printf("���� ������ �Է����ּ���. ");
	scanf_s("%d", &man);

	result_cmp = cmp(straw, man);

	if (result_cmp == straw) {
		printf("���Ⱑ ");
		diff = straw - man;
	}
	else {
		printf("���� ");
		diff = man - straw;
	}
	printf("%d������, %d �� �� ��Դϴ�.\n", result_cmp, diff);

	return 0;
}