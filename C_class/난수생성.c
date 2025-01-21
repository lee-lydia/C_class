#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	// 난수 : 무작위 수
	// rand(), srand() : <stdlib.h>
	// time(NULL) : <time.h>
	/*
	rand() : call 할 때마다 무작위 배열에서 순서대로 [0], [1], ... 을 불러오는 함수
	srand(#) : #에 해당하는 무작위 배열(다른 시드, seed)을 가져오는 함수
	time(NULL) : 현재 시간, (unsigned)로 사용

	** 값의 범위 설정 : rand() % n -> 0 ~ n-1
									if 범위 : min <= a <= max -> rand() % (max-min+1) + min
	*/

	int rad;
	srand((unsigned) time(NULL)); // NULL : 0 -> 현재 시간, (unsigned)로 사용.
	rad = rand(); // 난수를 생성하는 함수 - RAND_MAX : 0 ~ 32,767 사이에서 임의의 수를 뽑아내는 수
	printf("%d\n", rad);
	rad = rand() % 101;
	printf("%d\n", rad);

	return 0;
}