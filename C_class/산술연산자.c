#include <stdio.h>

int main(void)
{
	// ��ȣ ������(���׿�����) : + (���), - (����)
	// ��� ������(���׿�����) : + (���ϱ�), - (����), * (���ϱ�), / (������), % (������)
	int number1 = 7, number2 = 3; // �ǿ�����
	printf("%d + %d = %d\n", number1, number2, number1 + number2);
	printf("%d - %d = %d\n", number1, number2, number1 - number2);
	printf("%d * %d = %d\n", number1, number2, number1 * number2);
	printf("%d / %d = %d\n", number1, number2, number1 / number2);
	printf("%d %% %d = %d\n", number1, number2, number1 % number2);

	/*������� �ڷ��� : int, int -> int
									int, float -> float **
									int, char -> int
									char, char -> char
									char, float -> float
									float, float -> float*/ 

	int num1 = 1;
	float num2 = 1.2;
	printf("%d + %.1f = %.1f\n", num1, num2, num1 + num2);

	return 0;
}