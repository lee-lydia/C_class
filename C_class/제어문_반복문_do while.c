#include <stdio.h>

int main(void)
{
	/*
	자료형 변수명 = 초기화;
	do {
		실행시킬 코드;
		증감식;
	} while (조건식);
	*/
	
	int do_while = 1;

	do {
		printf("do whiel문 %d 연습중\n", do_while);
		do_while++;
	} while (do_while <= 10); // 조건을 나중에 검사 -> 최소 한 번 이상 실행 : 최소 시행 횟수 - 1회      vs.     while : 최소 시행 횟수 - 0회

	return 0;
}