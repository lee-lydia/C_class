#include <stdio.h>

int main(void)
{
	// 크기가 8인 배열 arr을 선언하고, 1,2,3,4,5,6,7,8로 초기화한 후, 이 배열의 마지막 요소를 가리키는 포인터 변수 ptr을 선언하고
	// 포인터 변수 ptr에 저장된 값을 감소시키는 방식으로 배열의 모든 요소에 접근하여 배열 요소 중 홀수에 해당하는 값들의
	// 총 합을 구하는 코드를 작성

	//  1. 배열 / 2. 포인터 변수 / 3. 홀수값의 총 합을 넣을 변수 / 4. for문을 사용해서 배열에 접근 / 5. if문을 사용해서 홀수를 가림
	
	int arr[8] = { 1,2,3,4,5,6,7,8 }; // 배열 선언 및 초기화
	int* ptr = arr + 7; // 마지막 요소의 주소를 가리키는 포인터 변수
	int odd_total = 0; // 홀수의 합을 저장할 변수

	for (int i = 0;i < 8;i++) {
		if (*(ptr - i) % 2 == 0) { // 짝수라면
			continue;
		}
		odd_total += *(ptr - i);
	}
	printf("%d\n", odd_total);

	odd_total = 0;

	for (int i = 0;i < 8;i++) {
		if (*ptr % 2 != 0) {
			odd_total += *ptr; // 홀수라면
		}
		ptr--;
	}
	printf("%d\n", odd_total);

	return 0;
}