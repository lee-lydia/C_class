#include <stdio.h>

struct car
{
	char brand[BRAND_NAME];
	int year;
};

int main(void)
{
	/*
	struct ����ü�� ������ = {}; // �ʱ�ȭ
	struct ����ü��* �����͸� = &������;

	������ : (�����͸�*).�����
				  �����͸�->�����
	*/

	struct car myCar = { "Tesla", 2023 };
	struct car* ptr = &myCar;

	printf("�귣�� : %s\n", ptr->brand); // (ptr*).brand
	printf("���� : %d\n", ptr->year); // (ptr*).year

	return 0;
}