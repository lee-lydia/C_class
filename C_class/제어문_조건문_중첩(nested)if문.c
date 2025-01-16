#include <stdio.h>

int main(void)
{
	/*
	** nested (중첩) if 문
	if (조건식1) {
		if (조건식2) {
			조건식1과 조건식2를 모두 만족할 경우 코드 실행;
		}
	}
	*/

	int studentNum = 250108, studentNumCheck;
	int password = 123456, passwordCheck;

	printf("학번을 입력해주세요. ");
	scanf_s("%d", &studentNumCheck);

	printf("비밀번호를 입력해주세요. ");
	scanf_s("%d", &passwordCheck);

	if (studentNumCheck == studentNum) {
		if (passwordCheck == password) {
			printf("%d 님 로그인되셨습니다.", studentNumCheck);
		}
		else {
			printf("비밀번호가 일치하지 않습니다.");
		}
	}
	else {
		printf("아이디가 일치하지 않습니다.");
	}

	return 0;
}