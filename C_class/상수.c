#include <stdio.h>

#define MYAGE 10 // 가장 먼저 처리

int main(void)
{
	// 변수: 변할 수 있는 값
	int num = 2;
	num = 3;

	// 상수: 변하지 않는 값
	/*
	literal (리터럴) 상수: 그 자체로 고정된 상수, 자료형을 정해주지 않았을 때 자동적으로 처리되는 상수
												정수(int), 실수(double)
										접미사		l				f			사용 -> 자료형 선택 가능 (e.g. 3.14f, 200000l)
	symbolic (심볼릭) 상수: 변하지 않는 값
											접두사 const
											변수 선언 앞에 사용 -> 심볼릭 상수
			macro (매크로) 상수: 심볼릭 상수의 일종 - 메인함수 위에 지정
												세미콜론(;) X
												#include 상수명 값
	*/

	//const int num3 = 3; // 선언과 동시에 초기화만 가능
	const int NUM3 = 3; // 일반적으로 심볼릭 상수는 대문자로 사용
	/*
	const int num3;
	num3 = 3;
	선언 따로 초기화 따로 불가능
	*/

	printf("%d", MYAGE);

	return 0;
}