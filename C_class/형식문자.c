#include <stdio.h>

int main(void)
{
	// %d : char, short, int  (��ȣ �ִ� 10���� ����)
	// %i : int ���
	// %ld : long (��ȣ �ִ� 10���� ����)
	// %lld : long long (��ȣ �ִ� 10���� ����)
	// %u : unsinged int (��ȣ ���� 10���� ����)
	// %o : unsigned int
	// %x, %X : unsigned int (16����)
	// %f : float  (10���� ������ �ε��Ҽ��� �Ǽ�)
	// %g : float, double
	// %e : float, double
	// %lf : double, long double
	// %c : char, short, int (���� �����ϴ� ����)
	// %s : ���ڿ�
	// %p : ������ �ּҰ�

	long long x = 2200000000;
	printf("��: %lld\n", x);
	
	printf("%10d\n", 42);
	printf("%-10d", 42);
	printf("1\n");
	printf("%5d\n", 12345);
	printf("%5d\n", 123456);	
	printf("%010d\n", 123456); //������ 0���� ä����. -�������İ� ��� �Ұ���

	printf("%6.3f\n", 1.234);

	return 0;
}