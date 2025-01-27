#include <stdio.h>

int sayHello(int count)
{
	printf("Hello!\n");

	if (count != 3) {
		sayHello(count + 1);
	}

	return 0;
}

int main(void)
{
	// 재귀 호출(recursion) 함수 : 몸체 내에서 자기 자신을 호출하는 함수
	//												재귀 호출의 종료 조건이 반드시 필요
	
	sayHello(1);

	return 0;
}