#include <stdio.h>

int main(void)
{
	// +, -, *, / 이 가능
	// 변수 : 문자형 1개 / 정수형 2개
	// 나눗셈 특수처리

	char cal;
	int value1, value2;

	printf("식을 입력해주세요.\n");
	scanf_s("%d %c %d", &value1, &cal, 1, &value2);

	switch (cal) {
	case '+': printf("%d %c %d = %d\n", value1, cal, value2, value1 + value2);
		break;
	case '-': printf("% d %c % d = %d\n", value1, cal, value2, value1 - value2);
		break;
	case '*': printf("% d %c % d = %d\n", value1, cal, value2, value1 * value2);
		break;
	case '/':
		if (value2 == 0) {
			printf("나눌 수 없는 숫자입니다.\n");
		}
		else {
			printf("% d %c % d = %f\n", value1, cal, value2, (float)value1 / (float)value2);
		}
		break;
	default: printf("연산자를 잘못 입력하셨습니다. (+, -, *, / 중 선택해주세요.)\n");
	}

	return 0;
}