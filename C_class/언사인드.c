#include <stdio.h>

int main(void)
{
	unsigned char ch; // 0~255 (signed: -128~127)
	unsigned short sh; // 0~65,535 (signed: -32,768~32,767)
	unsigned int in; // 0~4,294,967,295 (signed: -2,147,483,648~2,147,483,647)
	char num;

	ch = 128;
	sh = 50000;
	in = 4100000000;
	num = 255; // 11111111 = -1

	printf("%d\n", ch);
	printf("%d\n", sh); // %d: signed int�������� ��� ������ ���� ����
	printf("%u\n", in); // %u ���
	printf("%d\n", num); // -1 ���

	return 0;
}