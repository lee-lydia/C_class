#include <stdio.h>

int main(void)
{
	/*
	for (초기값;조건식;증감식) {
		continue;
		실행할 코드;
	}

	while (조건식) {
		증감식;
		continue;
		실행할 코드;
	}

	// continue를 만나면 다시 조건부터 검사 : 다음 조건으로 넘어가기
	*/

	int for_continue;
	for (for_continue = 0;for_continue <= 10;for_continue++) {
		if (for_continue % 2 == 0) { // 짝수라면
			continue;
		}
		printf("%d\n", for_continue);
	}

	printf("\n");

	int while_continue = 0;
	while (while_continue < 10) {
		while_continue++;
		if (while_continue % 2 != 0) { // 홀수라면
			continue;
		}
		printf("%d\n", while_continue);
	}

	return 0;
}