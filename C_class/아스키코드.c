#include <stdio.h>

int main(void)
{
	// ASCII code: ���ڿ� ���ڰ� mapping�Ǿ� �ִ�.

	char  ch1 = 'A';
	printf("%c\n", ch1);
	printf("%d\n", ch1);

	char ch2 = 65;
	printf("%c\n",ch2);

	// A~Z : 65~90
	// a~z : 97~122
	// 0~1 : 48~57

	printf("���� : %c, ����: %d\n", ch1, ch1);
	printf("����: %c, ����: %d\n", ch2, ch2);

	int num3 = 'c';

	printf("����: %c, ����: %d\n", num3, num3);

	return 0;
}