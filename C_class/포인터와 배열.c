#include <stdio.h>

int main(void)
{
	/**************************************************************************************************
	1. 배열의 이름 = 배열의 첫 번째 요소(인덱스 0)의 주소를 가리키는 포인터
		자료형 변수명[m] = 초기값; // 변수명은, 변수명[0]의 첫 번째 주솟값을 가리키는 포인터 변수이다.
		자료형* ptr = 변수명; // = &변수명[0]
	2. 배열의 요소에 접근할 때 배열의 인덱스를 사용하거나, 포인터의 역참조를 사용하나 둘 다 데이터에 접근이 가능하다.
		ptr + n = address는 n * sizeof(자료형) 증가 = 변수명 + n = &변수명[n] (0 <= n <= m)
		변수명[n] = *(변수명+n)
	3. 배열의 이름은 포인터상수로 동작한다. (배열의 이름에 저장된 주소는 변경불가하다.)
	**************************************************************************************************/

	int a[5] = { 1,2,3,4,5 };
	int* ptr = a;
	printf("%p\n", ptr); // &a[0]

	int b = 5;
	int* b_ptr = &b;
	printf("ptr: %p, ptr+1: %p\n", b_ptr, b_ptr + 1);
	b_ptr[0] = 10;	 // *b_ptr = 10;
	printf("*b_ptr: %d, b: %d\n", *b_ptr, b);

	return 0;
}