#include <stdio.h>

int main(void) {
	// while ���� ����Ͽ� ����ڰ� 0�� �Է��� ������ ���α׷��� ������ �ʴ´�.
	// ����ڰ� � ���ڸ� �Է��ߴٸ� (�Է��� ���ڴ� *�Դϴ�. (0�Է� �� ����))

	int input = 1;
	printf("���ڸ� �Է����ּ���. (0 �Է� �� ����) ");

	while (input != 0) {
		scanf_s("%d", &input);
		printf("�Է��� ���ڴ� %d�Դϴ�.", input);
		if (input == 0) {
			printf(" ����.\n");
		}
		else {
			printf(" (0 �Է� �� ����)\n");
		}
	}

	return 0;
}