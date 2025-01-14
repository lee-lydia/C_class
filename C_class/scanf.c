#include <stdio.h>

int main(void)
{
	// 1. 입력할 데이터에 대응하는 자료형
	// 2. 입력할 데이터가 저장될 메모리 공간 (변수)
	// scanf() -> scanf_s() : scanf의 문제점을 보완한 함수
	// scnaf() : 입력값의 크기를 명시적으로 지정하지 않아 overflow 현상 발생

	int num;
	scanf_s("%d", &num); // 입력 함수: 대기 상태
	
	// scanf_s("%d\n", &num); // X
	scanf_s("%d", &num); // 입력을 받은 다음
	printf("\n"); // 개행 출력 : 출력 함수
	
	// scanf_s("입력 : %d", &num); // X
	printf("입력: "); // 문구 출력 후
	scanf_s("%d", &num); // 입력
	printf("\n");



	int x, y, z, total;

	printf("정수 3개 입력: ");
	scanf_s("%d %d %d", &x, &y, &z);
	total = x + y + z;
	printf("%d + %d + %d = %d\n", x, y, z, total);

	printf("정수 3개 입력: ");
	scanf_s("%d, %d, %d", &x, &y, &z);
	total = x + y + z;
	printf("%d + %d + %d = %d\n", x, y, z, total);



	float fnum;
	printf("실수 입력 : ");
	scanf_s("%f", &fnum);
	printf("입력된 값 : %.2f\n", fnum); // %0.2f = %.2f

	float scanf_pi;
	printf("원주율 입력 : ");
	scanf_s("%f", &scanf_pi);
	printf("입력된 값 : %.2f\n", scanf_pi);

	return 0;
}