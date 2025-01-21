#include <stdio.h>

int main(void)
{
	char string_text[] = "�ȳ��ϼ���!";
	printf("���ڿ� ���� string_text�� ũ��� : %zd\n", sizeof(string_text)); // 12 = 2(��) + 2(��) + 2(��) + 2(��) + 2(��) + 1(!) + 1(\0)
	// �ѱ� : utf - 8 �� ���ڵ� ���(���� �� �ƴ϶� �پ��� ��� ����) ���
	
	char english_text[] = "hello!";
	printf("���� ���ڿ� english_text�� ũ��� : %zd\n", sizeof(english_text));

	char long_text[50] = "This is long";
	printf("���ڿ� ���� long_text�� ũ��� : %zd\n", sizeof(long_text)); // 50 ��� �� �迭 ��ü�� ũ�� ��ȯ

	printf("�迭 long_text�� �ʱ�ȭ�� ���ڿ��� ũ��� : %zd\n", strlen(long_text)); // \0�� ������ ���ڿ��� ũ��
	printf("%s\n", long_text); // %s : ���ڿ��� ���Ĺ���

	char name[30] = "My name is ����";
	printf("%s\n", name);
	name[10] = '\0';
	printf("%s\n", name);

	char scanfs_string[50];
	printf("scanfs_string ���ڿ��� �Է��ϼ��� : ");
	scanf_s("%s", scanfs_string, (unsigned int) sizeof(scanfs_string)); // ������ ũ��� unsigned int��! // ������ �����ڷ� ����
	printf("%s\n", scanfs_string);

	while (getchar() != '\n'); // ���۸� ����

	char gets_string[50];
	printf("gets_s �� �Է¹��� ���ڿ��� �Է��ϼ��� : ");
	gets_s(gets_string, sizeof(gets_string));
	printf("%s\n", gets_string);
	// puts(gets_string);

	return 0;
}