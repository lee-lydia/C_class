#include <stdio.h>

int main(void)
{
	// ASCII code: 숫자와 문자가 mapping되어 있다.

	char  ch1 = 'A';
	printf("%c\n", ch1);
	printf("%d\n", ch1);

	char ch2 = 65;
	printf("%c\n",ch2);

	// A~Z : 65~90
	// a~z : 97~122
	// 0~1 : 48~57

	printf("문자 : %c, 숫자: %d\n", ch1, ch1);
	printf("문자: %c, 숫자: %d\n", ch2, ch2);

	int num3 = 'c';

	printf("문자: %c, 숫자: %d\n", num3, num3);

	return 0;
}