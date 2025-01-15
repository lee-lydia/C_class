#include <stdio.h>

int main(void)
{
	// ��Ʈ ������ : ��Ʈ ������ ����� ��(1)�� ����(0)���� ��ȯ�ϴ� ������
	/*
	AND (&) : �����ϴ� �� ��Ʈ�� ���� ��� 1�̸� 1�� 1�� ��ȯ, �ƴϸ� 0�� ��ȯ)
	OR (|) : �����ϴ� ��Ʈ�� �� �߿� 1�� �ϳ��� ������ 1�� ��ȯ
	XOR (^) : �����ϴ� ��Ʈ�� ���� �ٸ��� 1�� ��ȯ
	NOT (~) : ��Ʈ�� ���� 1�̸� 0��, 0�̶�� 1�� ��ȯ (��Ʈ�� ����)
	*/
	
	int bit_three = 3; // 00000011
	int bit_five = 5; // 00000101

	printf("bit_three & bit_five = %d\n", bit_three & bit_five); // 00000001 -> 1
	printf("bit_three | bit_five = %d\n", bit_three | bit_five); // 00000111 -> 7
	printf("bit_three ^ bit_five = %d\n", bit_three ^ bit_five); // 00000110 -> 6
	printf("~bit_three = %d\n", ~bit_three); // 11111100 -> -4
	printf("~bit_five = %d\n", ~bit_five); // 11111010 -> -6

	// ����Ʈ ������
	/*
	<< n : ���� ����Ʈ (* 2�� n��)
	>> n : ������ ����Ʈ (/ 2�� n��)
	*/

	return 0;
}