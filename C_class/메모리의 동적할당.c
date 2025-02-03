#include <stdio.h>
#include <stdlib.h>

int main(viod)
{
	// ���� �޸� �Ҵ� : heap ������ �Ҵ� (�����ڰ� ����. cf. stack, data���� : �����Ϸ��� ����)
	// malloc() : ������ ù �ּҸ� void������ ��ȯ
	// �ڷ���* ������ = (�ڷ���*)malloc(num * �ڷ����� ����Ʈ��);
	// free(���� ����) ���� ������ memory leak(�޸� ����) �߻�

	int num;
	printf("���� �Է� : ");
	scanf_s("%d", &num);

	if (num < 2) {
		printf("���ڴ� �ּ� 2 �̻� �Է��ؾ� �մϴ�.");
		return 1;
	}

	int* numLength = (int*)malloc(num * sizeof(int)); // 4byte ���� num�� ����
	// int numLength(num); // �����Ҵ�Ǿ���ϹǷ� ������ ���� �߻�

	if (numLength == NULL) { // ���� �޸��Ҵ��� ����� �Ǿ������� ���� ������ġ (�޸𸮰� �ʹ� ū ���, malloc�� NULL ��ȯ)
		printf("�޸� �Ҵ� ����!");
		return 1;
	}

	numLength[1] = 3;
	printf("%d\n", numLength[1]);
	free(numLength);

	return 0;
}