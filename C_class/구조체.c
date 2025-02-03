#include <stdio.h>

#define NAME_LEN 10
#define PHONE 20
#define BRAND_NAME 20

struct customer
{
	char name[NAME_LEN];
	char phone[PHONE];
	int number;
};

int main(void)
{
	// ����ü : ���� ���� Ÿ��(�ڷ���)�� ��� ���ο� Ÿ�� ���� - �����Լ� �ٱ��� ����
	/*
	struct ����ü�� // (struct ����ü��) �̶�� ���ο� �ڷ��� ����
	{
		�������� �ڷ����� �� �ڷ����� ���� ������ ����; // ���
	};

	���� �� �ʱ�ȭ : �迭ó�� ����
							struct ����ü�� ������ = {���1, ���2, ...};

	���� ���� ���ٹ� : dot product Ȱ��
								������.�����
	*/

	struct customer c1, c2; // 34byte �Ҵ�
	// c1.number = 1;
	printf("�̸� : ");
	gets_s(c1.name, NAME_LEN);
	printf("��ȭ��ȣ : ");
	gets_s(c1.phone, PHONE);
	printf("����ȣ : ");
	scanf_s("%d", &c1.number);
	
	while (getchar() != '\n'); // ���ۿ� �����ִ� ENTER ����

	printf("�̸� : ");
	gets_s(c2.name, NAME_LEN);
	printf("��ȭ��ȣ : ");
	gets_s(c2.phone, PHONE);
	printf("����ȣ : ");
	scanf_s("%d", &c2.number);

	printf("\n\n*** �� ���� ��� ***\n\n");
	printf("%3d %-20s %-20s %8d\n", 1, c1.name, c1.phone, c1.number);
	printf("%3d %-20s %-20s %8d\n", 2, c2.name, c2.phone, c2.number);

	return 0;
}