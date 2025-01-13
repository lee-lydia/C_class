#include <stdio.h>

int main(void)
{
	// 10 10.0
	/*
	bit : �����͸� �����ϰų� ǥ���� �� �ִ� ���� ���� ���� (1 bit : 0 �Ǵ� 1, �ϳ��� ���¸� ����)
	* 8 bits = 1 byte : 256 ������ ���� ǥ�� ���� (0~255)
	-> 1 bit, 2 bit, 3 bit, ... ǥ�� ���� ���°� ����
	
	* char : 1 byte | %c
				���� ����: signed(-128~127) - �ֻ�����Ʈ(��ȣ��Ʈ)�� ��ȣ �Ǵ�(0: ���/ 1: ����)
								unsigned(0~255)
	* short : 2 byte | %d
	* int : 4 byte | %d
	* long : 4 byte | %ld
	* long long : 8 byte | %lld
	* float : 4byte | %f
	* double : 8byte | %lf
	* long double : 8 byte �̻� | %llf
	
	unsigned char : %u
	unsigned long : %lu
	unsinged long long : %llu

	long long max_number = 2200000000;
	printf("%lld", max_number);

	*/

	unsigned int max_number = 2200000000;
	printf("%u\n", max_number);


	// sizeof() ������: �� Ȥ�� �ڷ����� ũ�� Ȯ�� ����

	int num1 = 1;
	printf("%d\n", sizeof(num1));

	printf("%d\n", sizeof(100));

	printf("%d\n", sizeof(3.14)); // double���� ũ��� ���
	printf("%d\n", sizeof(3.14f));

	printf("%d\n", sizeof(int));

	printf("%d\n", sizeof(float));

	printf("%d\n", sizeof(short));

	return 0;
}