#include <stdio.h>

typedef struct student
{
	char name[10];
	int age;
	int grade;
} std;

int main(void)
{
	/*
	학생 구조체 만들기 ( 멤버 : 이름, 나이, 학년)
	구조체를 배열로 선언 후 초기화(2개)
	모든 학생의 정보를 출력
	*/

	std stds[2] = {
		{"이준성",19,3},
		{"이준석",17,1}
	};

	printf("번호   %-10s %-5s %-5s\n", "이름", "나이", "학년");

	for (int i = 0;i < 2; i++) {
		printf("%5d  %-10s %-5d %-5d\n", i + 1, stds[i].name, stds[i].age, stds[i].grade);
	}
	
	return 0;
}