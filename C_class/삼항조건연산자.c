#include <stdio.h>

int main(void)
{
	// �������ǿ����� - ���ǽ� ? ��ȯ��1 (TRUE) : ��ȯ��2 (FALSE)

	int ten = 10, twenty = 20;
	int result;

	result = ten > twenty ? ten : twenty;
	printf("�� ū ���� : %d\n", result);


	// ���� 1 : ����ڿ��� ���ڸ� �Է¹޾Ƽ� �� ���ڰ� ¦����� 0��, Ȧ����� 1�� ���
	// ��� �޽��� : ����� �Է��� ���ڴ� *�̸� ��� : *

	int value, result2;

	printf("���ڸ� �Է��Ͻÿ�.");
	scanf_s("%d", &value);
	
	result2 = (value % 2 == 0) ? 0 : 1;
	printf("����� �Է��� ���ڴ� %d �̸� ��� : %d\n", value, result2);

	return 0;
}