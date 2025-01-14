#include <stdio.h>

int main(void)
{
	// 부호 연산자(단항연산자) : + (양수), - (음수)
	// 산술 연산자(이항연산자) : + (더하기), - (빼기), * (곱하기), / (나누기), % (나머지)
	int number1 = 7, number2 = 3; // 피연산자
	printf("%d + %d = %d\n", number1, number2, number1 + number2);
	printf("%d - %d = %d\n", number1, number2, number1 - number2);
	printf("%d * %d = %d\n", number1, number2, number1 * number2);
	printf("%d / %d = %d\n", number1, number2, number1 / number2);
	printf("%d %% %d = %d\n", number1, number2, number1 % number2);

	/*결과값의 자료형 : int, int -> int
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