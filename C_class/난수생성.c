#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	// ���� : ������ ��
	// rand(), srand() : <stdlib.h>
	// time(NULL) : <time.h>
	/*
	rand() : call �� ������ ������ �迭���� ������� [0], [1], ... �� �ҷ����� �Լ�
	srand(#) : #�� �ش��ϴ� ������ �迭(�ٸ� �õ�, seed)�� �������� �Լ�
	time(NULL) : ���� �ð�, (unsigned)�� ���

	** ���� ���� ���� : rand() % n -> 0 ~ n-1
									if ���� : min <= a <= max -> rand() % (max-min+1) + min
	*/

	int rad;
	srand((unsigned) time(NULL)); // NULL : 0 -> ���� �ð�, (unsigned)�� ���.
	rad = rand(); // ������ �����ϴ� �Լ� - RAND_MAX : 0 ~ 32,767 ���̿��� ������ ���� �̾Ƴ��� ��
	printf("%d\n", rad);
	rad = rand() % 101;
	printf("%d\n", rad);

	return 0;
}