#include <stdio.h>

int multiply(int a, int b)
{
	return a * b;
}

int cmp(int a, int b)
{
	return a > b ? a : b;
}

int main(void)
{
	/*
	���� 2������ ������ �����ϴ� �Լ� ����
	���� 2������ ����ڰ� �Է�
	���ϱ� ���� ��� : 0 X 0 = 00 ���
	*/

	int value1, value2;
	printf("���� �� ���� �Է��ϼ���. ");
	scanf_s("%d %d", &value1, &value2);
	int result = multiply(value1, value2);

	printf("���ϱ� ���� ��� : %d X %d = %d\n", value1, value2, result);

	/*
	�� ���� �� �� ū ���� ��ȯ�ϴ� �Լ�
	���� ���� �Է¹ް� �� ������ �Է¹޾Ƽ�, �� ��� ������ ������ ���
	*/

	int straw, man, result_cmp;
	printf("������ ������ �Է����ּ���. ");
	scanf_s("%d", &straw);
	printf("���� ������ �Է����ּ���. ");
	scanf_s("%d", &man);

	result_cmp = cmp(straw, man);
	
	if (result_cmp == straw) {
		printf("���Ⱑ ");
	}
	else {
		printf("���� ");
	}
	printf("%d������ �� ��Դϴ�.\n", result_cmp);

	return 0;
}