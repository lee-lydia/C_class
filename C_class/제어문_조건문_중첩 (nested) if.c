#include <stdio.h>

int main(void)
{
	/*
	** nested (��ø) if ��
	if (���ǽ�1) {
		if (���ǽ�2) {
			���ǽ�1�� ���ǽ�2�� ��� ������ ��� �ڵ� ����;
		}
	}
	*/

	int studentNum = 250108, studentNumCheck;
	int password = 123456, passwordCheck;

	printf("�й��� �Է����ּ���. ");
	scanf_s("%d", &studentNumCheck);

	printf("��й�ȣ�� �Է����ּ���. ");
	scanf_s("%d", &passwordCheck);

	if (studentNumCheck == studentNum) {
		if (passwordCheck == password) {
			printf("%d �� �α��εǼ̽��ϴ�.", studentNumCheck);
		}
		else {
			printf("��й�ȣ�� ��ġ���� �ʽ��ϴ�.");
		}
	}
	else {
		printf("���̵� ��ġ���� �ʽ��ϴ�.");
	}

	return 0;
}