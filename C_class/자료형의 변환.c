#include <stdio.h>

int main(void){

	// �ڵ� ����ȯ : �ڷ����� ���� ����ȯ (e.g. ���� �Է� -> double ������ ������ ��ȯ�� ����, �Ҽ����� �ս� ��)
	double change_number = 10; // 10.000000
	printf("%f\n", change_number);

	int change_number2 = 5.11223; // �Ҽ����� �ս�
	printf("%d\n", change_number2);


	// ����� ����ȯ : ��������� � �ڷ������� ǥ���� �� �ۼ�
	printf("%d\n", (int)1.1234); //�Ҽ����� �ս�
	printf("%d\n", (short)1.1234); // �Ҽ����� �ս�
	printf("%f\n", (double)22); // �Ҽ��� �߰�
	printf("%f\n", (float)22); //�Ҽ��� �߰�


	// %zd : sizeof() �� ��� �� ���


	float f = 3.14f; // �Ҽ��� ���� �� �⺻������ double�� �ν� -> f�� �ٿ��� float������ �Ҽ��� �ν�
	printf("%f\n", f);

	// 2�� ���� : ���ؼ� 0�� ����� ��(���� ��ȣ�� ���� 10���� ��)
	// ��ü �ݴ�� + 1

	return 0;
	}