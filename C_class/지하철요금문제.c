#include <stdio.h>

int main(void)
{
	// ����ڰ� 20�� �̻��̸� 1280��, �̸��̶�� 800���� �޴� ���α׷� �����ϱ�

	int age, fee;
	printf("���̸� �Է��ϼ���. ");
	scanf_s("%d", &age);
	fee = age >= 20 ? 1280 : 800;
	printf("����� %d �� �Դϴ�.", fee);
	
	return 0;
}