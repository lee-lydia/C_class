#include <stdio.h>

#define NAME_LEN 10
#define PHONE 20
#define BRAND_NAME 20

struct customer
{
	char name[NAME_LEN];
	char phone[PHONE];
	int number;
};

int main(void)
{
	// 구조체 : 여러 개의 타입(자료형)을 묶어서 새로운 타입 생성 - 메인함수 바깥에 정의
	/*
	struct 구조체명 // (struct 구조체명) 이라는 새로운 자료형 생성
	{
		여러가지 자료형과 그 자료형에 대한 변수명 정의; // 멤버
	};

	선언 및 초기화 : 배열처럼 정의
							struct 구조체명 변수명 = {멤버1, 멤버2, ...};

	내부 변수 접근법 : dot product 활용
								변수명.멤버명
	*/

	struct customer c1, c2; // 34byte 할당
	// c1.number = 1;
	printf("이름 : ");
	gets_s(c1.name, NAME_LEN);
	printf("전화번호 : ");
	gets_s(c1.phone, PHONE);
	printf("고객번호 : ");
	scanf_s("%d", &c1.number);
	
	while (getchar() != '\n'); // 버퍼에 남아있는 ENTER 제거

	printf("이름 : ");
	gets_s(c2.name, NAME_LEN);
	printf("전화번호 : ");
	gets_s(c2.phone, PHONE);
	printf("고객번호 : ");
	scanf_s("%d", &c2.number);

	printf("\n\n*** 고객 정보 출력 ***\n\n");
	printf("%3d %-20s %-20s %8d\n", 1, c1.name, c1.phone, c1.number);
	printf("%3d %-20s %-20s %8d\n", 2, c2.name, c2.phone, c2.number);

	return 0;
}