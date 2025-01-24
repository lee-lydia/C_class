#include <stdio.h>

int main(void)
{
	/*
	문자 단위 입출력 : getchar(), putchar()

	자료형 변수명 = getchar(); // 문자 하나 저장
	putchar(출력할 문자); // 출력할 문자의 경우, 진짜 문자여도, 문자가 입력된 변수여도 OK
	
	EOF(End of File) 상수 : 입력 종료
											- 함수 호출 실패 시 : 읽어 들일 데이터 X
											- 윈도우(Ctrl+Z) 혹은 맥,리눅스(Ctrl+D)
						if (ch == EOF)
							break;
	*/

	int ch1, ch2;

	ch1 = getchar();
	ch2 = getchar();

	putchar(ch1); putchar(ch2);

	printf("\n");

	/*
	문자 단어 단위 입출력 함수 : scanf_s()

	*/

	/*
	문자열 단위 입출력 함수 : gets_s(), puts()
	
	char 배열명[n];
	gets_s(배열명, sizeof(배열명)); // '\n' 까지 ('\n' -> '\0')
	puts(배열명); // 자동 줄바꿈('\0' -> '\n')
	*/

	char ch[30];
	gets_s(ch, 30);
	puts(ch);

	/*
	printf();
	*/

	/*
	문자열 처리 함수 ( #include <string.h> )
	- strlen(str); // 인자로 전달된 주소의 문자열에서 **널 문자를 제외**한 문자열 길이 반환
	- strcpy(str1, str2); // 두 번째 인자로 전달된 주소의 문자열을 첫 번째 인자의 주소에 복사
	- strncpy(str1, str2, count); // 두 번째 인자로 전달된 주소의 문자열을 첫 번째 인자의 주소에 복사하되, **원하는 개수만큼만 복사**
	- strcat(str1, str2); // 두 번째 인자로 전달된 주소의 문자열을 첫 번째 인자로 전달된 주소의 문자열에 이어 붙이기
	- strncat(str1, str2, count); //두 번째 인자로 전달된 주소의 문자열을 첫 번째 인자로 전달된 주소의 문자열에 이어 붙이되, **원하는 개수만큼 이어붙이기**
	- strcmp(str1, str2);
	- strncmp(str1, str2, count)
	*/
	
	return 0;
}