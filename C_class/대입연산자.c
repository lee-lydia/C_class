#include <stdio.h>

int main(void)
{
	// ���� ������(���׿�����)
	
	int a = 1;
	int b = 1 + 2;

	// ���� ���� ������ : �ٸ� �����ڿ� �����Ͽ� �߰����� �ǹ̸� ���� ������
	/*
	a = b; : a = b;
	a += b; : a = a + b;
	a -= b; : a = a - b;
	a *= b; : a = a * b;
	a /= b; : a = a / b;
	a %= ;b : a = a % b;
	*/

	int num1 = 3, num2 = 4;
	num1 += 3; // 6
	num2 *= 4; // 16
	printf("num1 += 3 �� ����� : %d\n", num1); // num1 = 6
	printf("num2 *= 4 �� �����: %d\n", num2); // num2 = 16

	return 0;
}