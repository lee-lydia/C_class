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
	�л� ����ü ����� ( ��� : �̸�, ����, �г�)
	����ü�� �迭�� ���� �� �ʱ�ȭ(2��)
	��� �л��� ������ ���
	*/

	std stds[2] = {
		{"���ؼ�",19,3},
		{"���ؼ�",17,1}
	};

	printf("��ȣ   %-10s %-5s %-5s\n", "�̸�", "����", "�г�");

	for (int i = 0;i < 2; i++) {
		printf("%5d  %-10s %-5d %-5d\n", i + 1, stds[i].name, stds[i].age, stds[i].grade);
	}
	
	return 0;
}