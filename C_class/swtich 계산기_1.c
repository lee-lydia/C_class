#include <stdio.h>

int main(void)
{
	// +, -, *, / �� ����
	// ���� : ������ 1�� / ������ 2��
	// ������ Ư��ó��

	char cal;
	int value1, value2;

	printf("���� �Է����ּ���.\n");
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
			printf("���� �� ���� �����Դϴ�.\n");
		}
		else {
			printf("% d %c % d = %f\n", value1, cal, value2, (float)value1 / (float)value2);
		}
		break;
	default: printf("�����ڸ� �߸� �Է��ϼ̽��ϴ�. (+, -, *, / �� �������ּ���.)\n");
	}

	return 0;
}