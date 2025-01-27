#include <stdio.h>
#include <string.h>

int main(void)
{
	/***************************************************************************************
	문자 단위 입출력 : getchar(), putchar()

	자료형 변수명 = getchar(); // 문자 하나 저장
	putchar(출력할 문자); // 출력할 문자의 경우, 진짜 문자여도, 문자가 입력된 변수여도 OK
	
	EOF(End of File) 상수 : 입력 종료
											- 함수 호출 실패 시 : 읽어 들일 데이터 X
											- 윈도우(Ctrl+Z) 혹은 맥,리눅스(Ctrl+D)
						if (ch == EOF)
							break;
	***************************************************************************************/

	int ch1, ch2;

	ch1 = getchar();
	ch2 = getchar();

	putchar(ch1); putchar(ch2);

	printf("\n");


	/***************************************************************************************
	어절 단위 입출력 함수 : scanf_s()

	char 배열명[n];
	scanf_s("%s", 배열명, (unsigned int) sizeof(배열명)); // 공백은 구분자로 간주 -> 어절 단위
																							// 버퍼 크기 제공 필요 (unsigned int 형으로)
	***************************************************************************************/

	/***************************************************************************************
	printf();

	printf("%s", 배열명); // '\0' 까지 출력
	***************************************************************************************/

	char scanfs_string[50];
	printf("scanfs_string 문자열을 입력하세요 : ");
	scanf_s("%s", scanfs_string, (unsigned int)sizeof(scanfs_string));
	printf("%s\n", scanfs_string);


	/***************************************************************************************
	문자열 단위 입출력 함수 : gets_s(), puts()
	
	char 배열명[n];
	gets_s(배열명, sizeof(배열명)); // '\n' 까지 ('\n' -> '\0')
	puts(배열명); // 자동 줄바꿈('\0' -> '\n')
	***************************************************************************************/

	char getss_string[30];
	gets_s(getss_string, 30);
	puts(getss_string);
	printf("\n");


	/***************************************************************************************
	문자열 처리 함수 ( #include <string.h> )
	- strlen(str); // 인자로 전달된 주소의 문자열에서 **널 문자를 제외**한 문자열 길이 반환
	- strcpy(str1, str2); // 두 번째 인자로 전달된 주소의 문자열을 첫 번째 인자의 주소에 복사
	- strncpy(str1, str2, count); // 두 번째 인자로 전달된 주소의 문자열을 첫 번째 인자의 주소에 복사하되, **원하는 개수만큼만 복사**
	- strcat(str1, str2); // 두 번째 인자로 전달된 주소의 문자열을 첫 번째 인자로 전달된 주소의 문자열에 이어 붙이기
	- strncat(str1, str2, count); // 두 번째 인자로 전달된 주소의 문자열을 첫 번째 인자로 전달된 주소의 문자열에 이어 붙이되, **원하는 개수만큼 이어붙이기**
	- strcmp(str1, str2); // 인자로 전달된 두 문자열을 비교하여 내용이 같으면 0을, 같지 않으면 0이 아닌 값(str2가 크면 양수, str1이 크면 음수) 반환
	- strncmp(str1, str2, count); // 인자로 전달된 두 문자열을 비교하되, 각 문자열의 앞에서부터 **원하는 개수만큼만 비교**
	***************************************************************************************/

	char strlen_string[50] = "abc";
	printf("%d\n", (int) strlen(strlen_string));

	printf("\n");

	char strcpy_str1[] = "abc", strcpy_str2[] = "def";
	strcpy(strcpy_str1, strcpy_str2);
	printf("%s\n%s\n", strcpy_str1, strcpy_str2);
	strcpy_str1[0] = 'a';
	strcpy_str1[1] = 'b';
	strcpy_str1[2] = 'c';
	strcpy_str1[3] = '\0';
	strncpy(strcpy_str1, strcpy_str2, 2);
	printf("%s\n%s\n", strcpy_str1, strcpy_str2);

	printf("\n");
	
	char strcat_str1[] = "abc", strcat_str2[] = "def";
	strcat(strcat_str1, strcat_str2);
	printf("%s\n%s\n", strcat_str1, strcat_str2);
	strcat_str1[0] = 'a';
	strcat_str1[1] = 'b';
	strcat_str1[2] = 'c';
	strcat_str1[3] = '\0';
	strncat(strcat_str1, strcat_str2, 2);
	printf("%s\n%s\n", strcat_str1, strcat_str2);

	printf("\n");

	char strcmp_str1[] = "abc", strcmp_str2[] = "def", strcmp_str3[] = "abc";
	printf("%d\n", strcmp(strcmp_str1, strcmp_str2));
	printf("%d\n", strcmp(strcmp_str1, strcmp_str3));
	printf("%d\n", strcmp(strcmp_str2, strcmp_str1));
	printf("%d\n", strncmp(strcmp_str1,strcmp_str2, 2));
	printf("%d\n", strncmp(strcmp_str1, strcmp_str3, 2));
	printf("%d\n", strncmp(strcmp_str2, strcmp_str1, 2));


	// 버퍼를 비우는 방법 : while (getchar() != '\n');
	
	return 0;
}