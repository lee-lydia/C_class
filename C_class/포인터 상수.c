#include <stdio.h>

int main(void)
{
	/*
	������ ��� : �����Ͱ� ����Ű�� �޸� ������ ���� �ٲ� �� ������(������), �����Ͱ� ����Ű�� �ּҴ� �������� ����.
	�ڷ���* const ����� = &������; // �ٸ� ������ ������ �� ����.
	*/

	int x = 10, y = 20;
	int* const PTR = &x;
	printf("%d\n", *PTR);
	*PTR = 30;
	printf("%d\n", *PTR);
	// PTR = &y;

	return 0;
}