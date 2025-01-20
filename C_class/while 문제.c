#include <stdio.h>

int main(void) {
	// while 문을 사용하여 사용자가 0을 입력할 때까지 프로그램은 끝나지 않는다.
	// 사용자가 어떤 숫자를 입력했다면 (입력한 숫자는 *입니다. (0입력 시 종료))

	int input = 1;
	printf("숫자를 입력해주세요. (0 입력 시 종료) ");

	while (input != 0) {
		scanf_s("%d", &input);
		printf("입력한 숫자는 %d입니다.", input);
		if (input == 0) {
			printf(" 종료.\n");
		}
		else {
			printf(" (0 입력 시 종료)\n");
		}
	}

	return 0;
}