#include <stdio.h>

typedef int integer;

struct car
{
	char brand[BRAND_NAME];
	int year;
};

typedef struct car car;

int main(void)
{
	// typedef : ���� �ڷ����� �ٸ� �̸� �ο�(��Ī)
	// typedef ���ڷ��� ���̸�;

	/*
	* ����ü������ typedef
	
	struct ����ü��
	{

	};
	typedef struct ����ü�� ���̸�;

	or

	typedef struct ����ü��
	{
	
	} ���̸�;
	*/

	car myCar = { "Tesla", 2023 };
	car* ptr = &myCar;

	printf("�귣�� : %s\n", ptr->brand); // (ptr*).brand
	printf("���� : %d\n", ptr->year); // (ptr*).year

	return 0;
}