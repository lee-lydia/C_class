#include <stdio.h>

void hello(char* name)
{
	printf("�ȳ��ϼ��� %s��\n", name);
}

int main(void)
{
	// ����ڿ��� �̸��� �Է¹޾Ƽ� �ȳ��ϼ��� **�� �̶�� �λ��ϴ� ���α׷�

	char name[50];
	printf("�̸��� �Է��ϼ���.");
	scanf_s("%s", name, (unsigned int) sizeof(name));
	hello(name);

	return 0;
}