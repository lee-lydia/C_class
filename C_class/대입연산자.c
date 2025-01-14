#include <stdio.h>

int main(void)
{
	// 대입 연산자(이항연산자)
	
	int a = 1;
	int b = 1 + 2;

	// 복합 대입 연산자 : 다른 연산자와 결합하여 추가적인 의미를 갖는 연산자
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
	printf("num1 += 3 의 결과는 : %d\n", num1); // num1 = 6
	printf("num2 *= 4 의 결과는: %d\n", num2); // num2 = 16

	return 0;
}