#include <stdio.h>

void swap(int* a, int* b)
{
	// 변수 하나 만들기(임시공간)
	// 매개변수로 전달받은 첫번째 인자값을 임시공간에 넣어놓고
	// 두 번째 매개변수로 받아온 인자값을 첫번째 매개변수에 넣음
	// 그 후 임시공간에 있는 인자값을 두 번째 매개변수에 넣기
	int temp = *a;
	*a = *b;
	*b = temp;
	printf("a : %d, b : %d\n", *a, *b);
}

int main(void)
{
	// Call-by-value : 함수 정의 시, 매개변수를 기본 형태의 변수로 지정하여 값만 전달
	//								by 복사본 생성해 수정
	// Call-by-reference : 함수 정의 시, 매개변수를 포인터 형태로 지정하여 값이 저장되어 있는 메모리의 주소값 전달
	//										by 주소 전달

	int a = 3, b = 5;
	swap(&a, &b);

	return 0;
}