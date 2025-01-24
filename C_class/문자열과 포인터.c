#include <stdio.h>

int main(void)
{
	/*
	문자열: 문자 여러 개로 이루어진 배열(상수)
				"" 사용
				null 문자('\0')가 맨 뒤에 붙어 문자열의 끝을 나타냄
	*/

	char good[] = "good"; // 배열명 good = 'g'의 주소
											// 문자열 원본(상수)의 복사본인 배열(변수)을 하나 생성
											// 주소 수정 불가능
	char* bad = "bad"; // 포인터 bad = 'b'의 주소
									// 복제본 없이 원본만 존재 -> 문자열의 수정 불가능(읽기 전용)
									// 주소 수정 가능

	good[0] = 'H';
	// good = "new good";
	
	// bad[0] = 's';
	bad = "new bad";

	printf("%s, %s", good, bad);

	return 0;
}