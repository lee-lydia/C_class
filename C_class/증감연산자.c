#include <stdio.h>

int main(void)
{
	// ���� ������(���׿�����): ������ ����� ���� 1��ŭ ������Ű�ų� (���� ������) 1��ŭ ���ҽ�ų �� ����ϴ� (���� ������) ������
	/*
	++ (���� ������) : ++���� (����, prefix), ����++(����, postfix)
	-- (���� ������) : --���� (����, prefix), ����-- (����, postfix)

	����: ���� ���� ���� �� ������ ����, ����: ������ ���� ���� �� ���� ����
	*/

	int putA = 10, putB = 20;
	printf("A : %d\n",putA); // putA=10, 10 ���
	printf("A : %d\n", ++putA); // putA=11, 11 ���
	printf("A : %d\n", putA++); // 11 ���, putA=12
	printf("A : %d\n", putA); // putA=12, 12���

	printf("B : %d\n", putB); // putB=20, 20 ���
	printf("B : %d\n", ++putB); // putB=21, 21 ���
	printf("B : %d\n", putB++); // 21 ���, putB=22
	printf("B : %d\n", putB); // putB=22, 22���

	return 0;
}