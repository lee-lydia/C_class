#include <stdio.h>

int main(void)
{
	// �� ������ �����: TRUE(1) or FALSE(0)
	/*
	or (||) : �ǿ����� �� �ϳ� �̻��� true -> true ��ȯ
	xor(^) : �ǿ����� ���� �޶�߸� (true�� false, false�� true) true ��ȯ
	and (&&) : �ǿ����� �� �ϳ� �̻��� false -> false ��ȯ
	not (!) : ������������, true -> false ��ȯ, false -> true ��ȯ

	�ǿ�����: ����������
	*/
	
	int one = 10, two = 20, three = 30, four = 40;
	int result;

	result = one > two || two > three || three > four;
	// 10 > 20 ? false
	// 20 > 30 ? false
	// 30 > 40 ? false
	// false ��ȯ
	printf("result : %d\n", result);

	result = one <= two && two <= three && three <= four; // true ��ȯ
	printf("result : %d\n", result);

	result = !(one > two); // true ��ȯ
	printf("result : %d\n", result);

	result = one<two ^ two>three;
	printf("result : %d\n", result);

	return 0;
}