#include <stdio.h>

int main(void)
{
	char cal;
	int value1, value2;

	printf("연산자를 먼저 입력해주세요. ");
	scanf_s("%c", &cal, 1); // 받아올 문자의 크기 지정

	printf("값 두 개를 입력해주세요. ");
	scanf_s("%d %d", &value1, &value2);

	switch (cal) {
	case '+': printf("%d + %d = %d", value1, value2, value1 + value2);
		break;
	case '-': printf("%d - %d = %d", value1, value2, value1 - value2);
		break;
	case '*': printf("%d * %d = %d", value1, value2, value1 * value2);
		break;
	case '/': 
		if (value2 == 0) {
			printf("0으로는 나눌 수 없습니다.");
		}
		else {
			printf("%d / %d = %.2f", value1, value2, ((float)value1 / (float)value2));
		}
		break;
	default: printf("연산자를 잘못입력하셨습니다.");
	}

	return 0;
}