#include <stdio.h>

int main(void)
{
	// �� ������ : ���, � ���踦 �˻��ϴ� ������
	/*
	a > b (a�� b���� ũ��)
	a < b (a�� b���� �۴�)
	a >= b (a�� b���� ũ�ų� ����)
	a <= b (a�� b���� �۰ų� ����)
	a == b (a�� b�� ����)
	a != b (a�� b�� �ٸ���)
	
	�� ���� �Ǵ� ���� -> ��(TRUE): 1, ����(FALSE): 0
	*/

	int a = 1, b = 10;

	printf("a > b : %d\n", a > b);
	printf("a < b : %d\n", a < b);
	printf("a >= b : %d\n", a >= b);
	printf("a <= b : %d\n", a <= b);
	printf("a == b : %d\n", a == b);
	printf("a != b : %d\n", a != b);

	return 0;
}