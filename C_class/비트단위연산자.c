#include <stdio.h>

int main(void)
{
	// 비트 연산자 : 비트 단위로 결과를 참(1)과 거짓(0)으로 반환하는 연산자
	/*
	AND (&) : 대응하는 각 비트의 값이 모두 1이면 1을 1을 반환, 아니면 0을 반환)
	OR (|) : 대응하는 비트의 값 중에 1이 하나라도 있으면 1을 반환
	XOR (^) : 대응하는 비트의 값이 다르면 1을 반환
	NOT (~) : 비트의 값이 1이면 0을, 0이라면 1을 반환 (비트값 반전)
	*/
	
	int bit_three = 3; // 00000011
	int bit_five = 5; // 00000101

	printf("bit_three & bit_five = %d\n", bit_three & bit_five); // 00000001 -> 1
	printf("bit_three | bit_five = %d\n", bit_three | bit_five); // 00000111 -> 7
	printf("bit_three ^ bit_five = %d\n", bit_three ^ bit_five); // 00000110 -> 6
	printf("~bit_three = %d\n", ~bit_three); // 11111100 -> -4
	printf("~bit_five = %d\n", ~bit_five); // 11111010 -> -6

	// 시프트 연산자
	/*
	<< n : 왼쪽 시프트 (* 2의 n승)
	>> n : 오른쪽 시프트 (/ 2의 n승)
	*/

	return 0;
}