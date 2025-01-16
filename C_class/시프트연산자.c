#include <stdio.h>

int main(void)
{
	// 시프트 연산자
	/*
	<< n : 왼쪽 시프트 - n칸 왼쪽으로 비트 이동, 나머지는 0로 채움 (* 2의 n승)
	>> n : 오른쪽 시프트 - n칸 오른쪽으로 비트 이동, 나머지는 부호비트로 채움 (/ 2의 n승)
	*/

	int num1 = 10, num2 = 20;
	int shift_left = num1 << 1; // 10 * 2의 2승
	int shift_right = num2 >> 2; // 10 / 2의 2승

	printf("%d << 1 = %d\n", num1, shift_left);
	printf("%d >> 2 = %d\n", num2, shift_right);


	printf("%d\n", 10 << 1); // 00001010 -> 00010100 : 20
	printf("%d\n", 10 << 2); // 40 (00101000)

	printf("%d\n", 10 >> 1); // 00001010 -> 00000101 : 5
	printf("%d\n", 10 >> 2); // 2 (00000010)
	printf("%d\n", -10 >> 1); // 11110110 -> 11111011 : -5
	printf("%d\n", -10 >> 2); // 11110110 -> 11111101 : -3 // 무조건 작은 정수로 떨어짐.

	return 0;
}