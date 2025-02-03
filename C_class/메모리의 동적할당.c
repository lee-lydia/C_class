#include <stdio.h>
#include <stdlib.h>

int main(viod)
{
	// 동적 메모리 할당 : heap 영역에 할당 (개발자가 관리. cf. stack, data영역 : 컴파일러가 관리)
	// malloc() : 공간의 첫 주소를 void형으로 반환
	// 자료형* 변수명 = (자료형*)malloc(num * 자료형의 바이트수);
	// free(공간 해제) 하지 않으면 memory leak(메모리 누수) 발생

	int num;
	printf("숫자 입력 : ");
	scanf_s("%d", &num);

	if (num < 2) {
		printf("숫자는 최소 2 이상 입력해야 합니다.");
		return 1;
	}

	int* numLength = (int*)malloc(num * sizeof(int)); // 4byte 공간 num개 생성
	// int numLength(num); // 정적할당되어야하므로 컴파일 오류 발생

	if (numLength == NULL) { // 동적 메모리할당이 제대로 되었는지에 대한 안전장치 (메모리가 너무 큰 경우, malloc은 NULL 반환)
		printf("메모리 할당 실패!");
		return 1;
	}

	numLength[1] = 3;
	printf("%d\n", numLength[1]);
	free(numLength);

	return 0;
}