#include <stdio.h>

int main(void)
{
	// ���� 86 / ���� 75 / ���� 88 / ��ȸ 60 / ���� 96
	// ����� �Ǽ��� ���

	float result1, result2, result3, result4, result5, avg1;
	result1 = 86;
	result2 = 75;
	result3 = 88;
	result4 = 60;
	result5 = 96;
	avg1 = (result1 + result2 + result3 + result4 + result5) / 5.0f;
	printf("¯���� �⸻��� ���: %.2f ��\n", avg1);

	// ���� 64 / ���� 56 / ���� 87.5 / ��ȸ 76.8 / ���� 96.9

	float result11, result22, result33, result44, result55, avg2;
	result11 = 64.0f;
	result22 = 56.0f;
	result33 = 87.5f;
	result44 = 76.8f;
	result55 = 96.9f;
	avg2 = (result11 + result22 + result33 + result44 + result55) / 5.0f;
	printf("ö���� �⸻��� ���: %.2f ��", avg2);

	return 0;
}