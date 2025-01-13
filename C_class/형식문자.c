#include <stdio.h>

int main(void)
{
	// %d : char, short, int  (부호 있는 10진수 정수)
	// %i : int 출력
	// %ld : long (부호 있는 10진수 정수)
	// %lld : long long (부호 있는 10진수 정수)
	// %u : unsinged int (부호 없는 10진수 정수)
	// %o : unsigned int
	// %x, %X : unsigned int (16진수)
	// %f : float  (10진수 형식의 부동소수점 실수)
	// %g : float, double
	// %e : float, double
	// %lf : double, long double
	// %c : char, short, int (값에 대응하는 문자)
	// %s : 문자열
	// %p : 포인터 주소값

	long long x = 2200000000;
	printf("값: %lld\n", x);
	
	printf("%10d\n", 42);
	printf("%-10d", 42);
	printf("1\n");
	printf("%5d\n", 12345);
	printf("%5d\n", 123456);	
	printf("%010d\n", 123456); //공백이 0으로 채워짐. -왼쪽정렬과 사용 불가능

	printf("%6.3f\n", 1.234);

	return 0;
}