#include <stdio.h>

int main(void)
{
	/*
	for ���� break
	for(�ʱⰪ;���ǽ�;������) {
		break;
		������ �ڵ�;
	}

	while ���� break
	�ڷ��� ������ = �ʱ�ȭ;
	while (���ǽ�) {
		break;
		������ �ڵ�;
		������;
	}
	*/

	for (int i = 0;i <= 10;i++) { // for���������� �������� �� for �� ���ο��� ����
		if (i == 6) {
			break;
		}
		printf("%d\n", i);
	}

	printf("\n");

	int i = 0;
	while (i <= 10) {
		if (i == 6) {
			break;
		}
		printf("%d\n", i);
		i++;
	}

	return 0;
}