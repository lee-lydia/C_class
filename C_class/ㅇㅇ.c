#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int value;
	printf("���ڸ� �Է��ϼ���.");
	scanf("%n", &value);
	for (int i = 0;i < value;i++) {
		for (int j = 0;j <= i;j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}