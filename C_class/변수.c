#include <stdio.h>

int main(void)
{
	//한 줄 주석
	/*
	여
	러
	printf("skdfjst");
	줄
	주
	석
	*/
	
	int num = 3;
	// 자료형 변수명 = 값;	// 변수의 선언 및 초기화
	/*자료형 변수명2; // 변수 선언
	변수명2 = 값; // 변수 초기화*/
	//변수명3 = 값; //불가능

	int num2; //선언
	num2 = 2; //초기화
	num2 = 5; //초기화

	int number1, number2; // 선언
	number1 = 10; // number1에 대한 초기화
	number2 = 20; // number2에 대한 초기화

	int number3 = 30, numbert4 = 40; // 여러 변수 동시 선언 및 초기화

	/*********************
	*변수명 규칙
	*가능한 Case
	int num = 50; // 영어만 가능
	int number16 = 16; //숫자 조합 가능
	int number_20 = 20; // 언더바 가능
	int Number = 165; // 대문자 가능(소문자와 구분됨)

	*불가능한 Case
	int hello World = 1; // 공백 불가
	int hell#s$$ = 2; //특수문자 불가
	int 12number = 12; // 숫자 먼저 사용 불가
	int printf = 1;
	int int = 1;
	int short = 1; //예약어 불가

	*변수명 사용 Case
	* 1. number_five
	* 2. numberFive
	*********************/

	return 0;
}