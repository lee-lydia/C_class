#include <stdio.h>

int main(void)
{
	/*
	�ڷ��� ������ = �ʱ�ȭ;
	do {
		�����ų �ڵ�;
		������;
	} while (���ǽ�);
	*/
	
	int do_while = 1;

	do {
		printf("do whiel�� %d ������\n", do_while);
		do_while++;
	} while (do_while <= 10); // ������ ���߿� �˻� -> �ּ� �� �� �̻� ���� : �ּ� ���� Ƚ�� - 1ȸ      vs.     while : �ּ� ���� Ƚ�� - 0ȸ

	return 0;
}