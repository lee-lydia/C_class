#include <stdio.h>

int main(void)
{
	/*
	** switch ��
	int ������ = �ʱⰪ;
	switch (������) {
	case ��1 :
		�ڵ� 1;
		break;
	case ��2 :
		�ڵ� 2;
		break;
		...
	default :
		�� case�� �ش����� �ʴ� ��� ������ �ڵ�;
	}

	** break; �� ���� ���, ���� case�� �ش��ϵ�, �ش����� �ʵ� ������ break;�� �����ų� ���� ������ �ڵ� ����
	*/

	int day;
	printf("������ �����ϼ���. (1~7 �� �� 1) : ");
	scanf_s("%d", &day);

	switch (day) {
	case 1: printf("�������Դϴ�.\n");
		break;
	case 2: printf("ȭ�����Դϴ�.\n");
		break;
	case 3: printf("�������Դϴ�.\n");
		break;
	case 4: printf("������Դϴ�.\n");
		break;
	case 5: printf("�ݿ����Դϴ�.\n");
		break;
	case 6: printf("������Դϴ�.\n");
		break;
	case 7: printf("�Ͽ����Դϴ�.\n");
		break;
	default: printf("��ȿ���� ���� �Է��Դϴ�. (1~7 �� �Է����ּ���.)\n");
	}

	return 0;
}