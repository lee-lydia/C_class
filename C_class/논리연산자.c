#include <stdio.h>

int main(void)
{
	// 논리 연산자 결과값: TRUE(1) or FALSE(0)
	/*
	or (||) : 피연산자 중 하나 이상이 true -> true 반환
	xor(^) : 피연산자 둘이 달라야만 (true와 false, false와 true) true 반환
	and (&&) : 피연산자 중 하나 이상이 false -> false 반환
	not (!) : 논리부정연산자, true -> false 반환, false -> true 반환

	피연산자: 연산대상데이터
	*/
	
	int one = 10, two = 20, three = 30, four = 40;
	int result;

	result = one > two || two > three || three > four;
	// 10 > 20 ? false
	// 20 > 30 ? false
	// 30 > 40 ? false
	// false 반환
	printf("result : %d\n", result);

	result = one <= two && two <= three && three <= four; // true 반환
	printf("result : %d\n", result);

	result = !(one > two); // true 반환
	printf("result : %d\n", result);

	result = one<two ^ two>three;
	printf("result : %d\n", result);

	return 0;
}