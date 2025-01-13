#include <stdio.h>

int main(void){

	// 자동 형변환 : 자료형에 맞춰 형변환 (e.g. 정수 입력 -> double 형태의 값으로 변환해 저장, 소수부의 손실 등)
	double change_number = 10; // 10.000000
	printf("%f\n", change_number);

	int change_number2 = 5.11223; // 소수부의 손실
	printf("%d\n", change_number2);


	// 명시적 형변환 : 명시적으로 어떤 자료형으로 표현할 지 작성
	printf("%d\n", (int)1.1234); //소수부의 손실
	printf("%d\n", (short)1.1234); // 소수부의 손실
	printf("%f\n", (double)22); // 소숫점 추가
	printf("%f\n", (float)22); //소숫점 추가


	// %zd : sizeof() 값 출력 시 사용


	float f = 3.14f; // 소숫점 포함 시 기본적으로 double로 인식 -> f를 붙여야 float형태의 소수로 인식
	printf("%f\n", f);

	// 2의 보수 : 합해서 0을 만드는 수(음의 부호를 붙인 10진수 값)
	// 전체 반대로 + 1

	return 0;
	}