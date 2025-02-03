#include <stdio.h>

typedef int integer;

struct car
{
	char brand[BRAND_NAME];
	int year;
};

typedef struct car car;

int main(void)
{
	// typedef : 기존 자료형에 다른 이름 부여(별칭)
	// typedef 원자료형 새이름;

	/*
	* 구조체에서의 typedef
	
	struct 구조체명
	{

	};
	typedef struct 구조체명 새이름;

	or

	typedef struct 구조체명
	{
	
	} 새이름;
	*/

	car myCar = { "Tesla", 2023 };
	car* ptr = &myCar;

	printf("브랜드 : %s\n", ptr->brand); // (ptr*).brand
	printf("연식 : %d\n", ptr->year); // (ptr*).year

	return 0;
}