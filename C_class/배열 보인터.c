#include <stdio.h>

int main(void)
{
	// �迭 ������ : �迭�� ����Ű�� ������ ����
	/*
	�ڷ��� �迭��[m]={};
	�ڷ���(*������)[m] = &�迭��; // m���� �ڸ��ڴ� -> �� ��ǥ �ּ� ����
	*/

	int a[3] = { 1,2,3 };
	int* ptr = a; // a[0]�� �ּҸ� ����

	// �迭 ������
	int arr[3] = { 1,2,3 };
	int(*arrptr)[3] = &arr; // arr �迭 ��ü�� �ּҸ� ����Ŵ
	printf("ù ��° ��� : %d\n", (*arrptr)[0]);
	printf("�� ��° ��� : %d\n", (*arrptr)[1]);
	printf("�� ��° ��� : %d\n", (*arrptr)[2]);

	printf("\n");

	for (int i = 0;i < 3;i++) {
		printf("arr[%d] : %d\n", i, (*arrptr)[i]); // i ��° �ּҸ� ������
	}

	return 0;
}