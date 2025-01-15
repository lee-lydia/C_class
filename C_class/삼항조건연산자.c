#include <stdio.h>

int main(void)
{
	// 삼항조건연산자 - 조건식 ? 반환값1 (TRUE) : 반환값2 (FALSE)

	int ten = 10, twenty = 20;
	int result;

	result = ten > twenty ? ten : twenty;
	printf("더 큰 값은 : %d\n", result);


	// 조건 1 : 사용자에게 숫자를 입력받아서 그 숫자가 짝수라면 0을, 홀수라면 1을 출력
	// 출력 메시지 : 당신이 입력한 숫자는 *이며 결과 : *

	int value, result2;

	printf("숫자를 입력하시오.");
	scanf_s("%d", &value);
	
	result2 = (value % 2 == 0) ? 0 : 1;
	printf("당신이 입력한 숫자는 %d 이며 결과 : %d\n", value, result2);

	return 0;
}