#include <stdio.h>

int sayHello(int count)
{
	printf("Hello!\n");

	if (count != 3) {
		sayHello(count + 1);
	}

	return 0;
}

int main(void)
{
	// ��� ȣ��(recursion) �Լ� : ��ü ������ �ڱ� �ڽ��� ȣ���ϴ� �Լ�
	//												��� ȣ���� ���� ������ �ݵ�� �ʿ�
	
	sayHello(1);

	return 0;
}