#include <stdio.h>

int main(void)
{
	/*
	** switch 문
	int 변수명 = 초기값;
	switch (변수명) {
	case 값1 :
		코드 1;
		break;
	case 값2 :
		코드 2;
		break;
		...
	default :
		위 case에 해당하지 않는 경우 실행할 코드;
	}

	** break; 가 없는 경우, 다음 case에 해당하든, 해당하지 않든 무조건 break;를 만나거나 나갈 때까지 코드 실행
	*/

	int day;
	printf("요일을 선택하세요. (1~7 중 택 1) : ");
	scanf_s("%d", &day);

	switch (day) {
	case 1: printf("월요일입니다.\n");
		break;
	case 2: printf("화요일입니다.\n");
		break;
	case 3: printf("수요일입니다.\n");
		break;
	case 4: printf("목요일입니다.\n");
		break;
	case 5: printf("금요일입니다.\n");
		break;
	case 6: printf("토요일입니다.\n");
		break;
	case 7: printf("일요일입니다.\n");
		break;
	default: printf("유효하지 않은 입력입니다. (1~7 중 입력해주세요.)\n");
	}

	return 0;
}