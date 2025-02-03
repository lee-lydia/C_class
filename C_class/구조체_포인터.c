#include <stdio.h>

struct car
{
	char brand[BRAND_NAME];
	int year;
};

int main(void)
{
	/*
	struct 구조체명 변수명 = {}; // 초기화
	struct 구조체명* 포인터명 = &변수명;

	역참조 : (포인터명*).멤버명
				  포인터명->멤버명
	*/

	struct car myCar = { "Tesla", 2023 };
	struct car* ptr = &myCar;

	printf("브랜드 : %s\n", ptr->brand); // (ptr*).brand
	printf("연식 : %d\n", ptr->year); // (ptr*).year

	return 0;
}