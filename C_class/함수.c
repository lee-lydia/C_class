#include <stdio.h>

void sayHello()
{
	printf("Hello World\n");
}

int add(int a, int b)
{
	return a + b;
}

void name(char* name)
{
	printf("Hello, %s\n", name);
}

int main(void)
{
	// 함수 : 특정 작업을 수행하는 코드 블록(재사용 가능)
	/*
	반환형 함수이름(매개변수)
	{ // 하뭇의 몸체
		실행할 코드;
		return 반환값;
	}

	- 반환형 : 함수의 결과를 나타낼 때 사용할 자료형
	- 함수이름 : 호출 시 사용할 이름 (개발자 정의)
	- 매개변수 : 함수가 작업을 수행하기 위해 필요한 입력값 (없을 수도 있음)
	- return : 함수가 작업을 끝낸 뒤 반환값을 호출한 곳으로 돌려주는 명령어 (void 일 땐 생략 가능)

	선언부 : 함수의 원형(main 함수 위) - 반환형 함수이름(매개변수-형과 개수만 같으면 ok)
	정의부 : 함수의 기능(main 함수 아래) - 반환형 함수이름(매개변수) {몸체}
	*/

	sayHello();

	int result = add(5, 3);
	printf("result : %d\n", result);

	char userName[] = "Eunji";
	name(userName);
	name("은지");

	return 0;
}