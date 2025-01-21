#include <stdio.h>

int main(void)
{
	char string_text[] = "안녕하세요!";
	printf("문자열 변수 string_text의 크기는 : %zd\n", sizeof(string_text)); // 12 = 2(안) + 2(녕) + 2(하) + 2(세) + 2(요) + 1(!) + 1(\0)
	// 한글 : utf - 8 의 인코딩 방식(영어 뿐 아니라 다양한 언어 지원) 사용
	
	char english_text[] = "hello!";
	printf("영어 문자열 english_text의 크기는 : %zd\n", sizeof(english_text));

	char long_text[50] = "This is long";
	printf("문자열 변수 long_text의 크기는 : %zd\n", sizeof(long_text)); // 50 출력 ∵ 배열 전체의 크기 반환

	printf("배열 long_text에 초기화된 문자열의 크기는 : %zd\n", strlen(long_text)); // \0를 제외한 문자열의 크기
	printf("%s\n", long_text); // %s : 문자열의 형식문자

	char name[30] = "My name is 은지";
	printf("%s\n", name);
	name[10] = '\0';
	printf("%s\n", name);

	char scanfs_string[50];
	printf("scanfs_string 문자열을 입력하세요 : ");
	scanf_s("%s", scanfs_string, (unsigned int) sizeof(scanfs_string)); // 버퍼의 크기는 unsigned int로! // 공백은 구분자로 간주
	printf("%s\n", scanfs_string);

	while (getchar() != '\n'); // 버퍼를 비우는

	char gets_string[50];
	printf("gets_s 로 입력받을 문자열을 입력하세요 : ");
	gets_s(gets_string, sizeof(gets_string));
	printf("%s\n", gets_string);
	// puts(gets_string);

	return 0;
}