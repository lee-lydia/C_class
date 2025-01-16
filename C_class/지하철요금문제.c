#include <stdio.h>

int main(void)
{
	// 사용자가 20살 이상이면 1280원, 미만이라면 800원을 받는 프로그램 구현하기

	int age, fee;
	printf("나이를 입력하세요. ");
	scanf_s("%d", &age);
	fee = age >= 20 ? 1280 : 800;
	printf("요금은 %d 원 입니다.", fee);
	
	return 0;
}