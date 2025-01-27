#include <stdio.h>

int main(void)
{
	/*
	1. 코드(Code) 영역 : 읽기 전용, 코드 흐름 담당
	2. 힙(Heap) 영역 : 사용자가 원하는 시점에 메모리 공간을 할당하고 원하는 시점에 소멸시킬 수 있는 변수 저장(동적 할당을 위한 공간) - 개발자의 해제 요청 필요
	3. 데이터(Data) 영역 : 전역 변수(global 변수), static 변수 저장
	4. 스택(Stack) 영역 : 지역 변수, 함수에 전달되는 인자(매개변수) 저장 - 함수 종료 시 자동 해제
	*/

	/*
	Dynamic Memory Allocation
	-malloc() ⊂ <stdio.h>
		자료형* 변수명 = (자료형*) malloc(size_t m);
		m 개의 자료형 메모리 공간 생성

	-calloc() ⊂ <stdlib.h>
		자료형* 변수명 = (자료형*) calloc(size_t m, size_t elem_size);
		m 개의 elem_size 바이트 메모리 공간 생성

	-realloc() ⊂ <stdio.h>
		변수명 = (자료형*) realloc(변수명, size_t elem_size);
		변수가 갖고 있는 공간의 크기를 elem_size로 변경
		공간이 충분하다면 바로 아래에 추가, 불충분하다면 다른 곳에 새로 생성

	-free()
		free(변수명);
		heap 공간에서 변수명이 가르키는 공간 해제

	if (변수명 == NULL)
	{
		코드; // 메모리 공간이 불충분해 malloc 함수가 실패할 경우 실행할 코드
	}
	*/
	
	return 0;
}