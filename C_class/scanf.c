#include <stdio.h>

int main(void)
{
	// 1. �Է��� �����Ϳ� �����ϴ� �ڷ���
	// 2. �Է��� �����Ͱ� ����� �޸� ���� (����)
	// scanf() -> scanf_s() : scanf�� �������� ������ �Լ�
	// scnaf() : �Է°��� ũ�⸦ ��������� �������� �ʾ� overflow ���� �߻�

	int num;
	scanf_s("%d", &num); // �Է� �Լ�: ��� ����
	
	// scanf_s("%d\n", &num); // X
	scanf_s("%d", &num); // �Է��� ���� ����
	printf("\n"); // ���� ��� : ��� �Լ�
	
	// scanf_s("�Է� : %d", &num); // X
	printf("�Է�: "); // ���� ��� ��
	scanf_s("%d", &num); // �Է�
	printf("\n");



	int x, y, z, total;

	printf("���� 3�� �Է�: ");
	scanf_s("%d %d %d", &x, &y, &z);
	total = x + y + z;
	printf("%d + %d + %d = %d\n", x, y, z, total);

	printf("���� 3�� �Է�: ");
	scanf_s("%d, %d, %d", &x, &y, &z);
	total = x + y + z;
	printf("%d + %d + %d = %d\n", x, y, z, total);



	float fnum;
	printf("�Ǽ� �Է� : ");
	scanf_s("%f", &fnum);
	printf("�Էµ� �� : %.2f\n", fnum); // %0.2f = %.2f

	float scanf_pi;
	printf("������ �Է� : ");
	scanf_s("%f", &scanf_pi);
	printf("�Էµ� �� : %.2f\n", scanf_pi);

	return 0;
}