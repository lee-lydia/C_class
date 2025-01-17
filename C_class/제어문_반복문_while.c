#include <stdio.h>

int main(void)
{
	/*
	자료형 변수명 = 초기값;
	while (조건) {
		반복시키고자 하는 코드;
		증감식;
	}
	*/

	int c_class = 1;
	while (c_class <= 10) {
		printf("c언어 수업 %d\n", c_class++);
	}

	printf("\n");

	// while문과 if문을 활용한 6단의 값 출력
	int count=1;

	while (count <= 10) {
		printf("%d\n", 6 * count);
		count++;
	}

	printf("\n");

	int count2 = 1;

	while (count2 <= 60) {
		if (count2 % 6 == 0) {
			printf("%d\n",count2);
		}
		count2++;
	}

	return 0;
}