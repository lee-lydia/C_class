#include <stdio.h>

int main(void)
{
	char cal;
	int value1, value2;

	printf("�����ڸ� ���� �Է����ּ���. ");
	scanf_s("%c", &cal, 1); // �޾ƿ� ������ ũ�� ����

	printf("�� �� ���� �Է����ּ���. ");
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
			printf("0���δ� ���� �� �����ϴ�.");
		}
		else {
			printf("%d / %d = %.2f", value1, value2, ((float)value1 / (float)value2));
		}
		break;
	default: printf("�����ڸ� �߸��Է��ϼ̽��ϴ�.");
	}

	return 0;
}