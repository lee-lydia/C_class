#include <stdio.h>

void sayHello()
{
	printf("Hello World\n");
}

int add(int a, int b)
{
	return a + b;
}

void name(char* name)
{
	printf("Hello, %s\n", name);
}

int main(void)
{
	// �Լ� : Ư�� �۾��� �����ϴ� �ڵ� ���(���� ����)
	/*
	��ȯ�� �Լ��̸�(�Ű�����)
	{ // �Ϲ��� ��ü
		������ �ڵ�;
		return ��ȯ��;
	}

	- ��ȯ�� : �Լ��� ����� ��Ÿ�� �� ����� �ڷ���
	- �Լ��̸� : ȣ�� �� ����� �̸� (������ ����)
	- �Ű����� : �Լ��� �۾��� �����ϱ� ���� �ʿ��� �Է°� (���� ���� ����)
	- return : �Լ��� �۾��� ���� �� ��ȯ���� ȣ���� ������ �����ִ� ��ɾ� (void �� �� ���� ����)

	����� : �Լ��� ����(main �Լ� ��) - ��ȯ�� �Լ��̸�(�Ű�����-���� ������ ������ ok)
	���Ǻ� : �Լ��� ���(main �Լ� �Ʒ�) - ��ȯ�� �Լ��̸�(�Ű�����) {��ü}
	*/

	sayHello();

	int result = add(5, 3);
	printf("result : %d\n", result);

	char userName[] = "Eunji";
	name(userName);
	name("����");

	return 0;
}