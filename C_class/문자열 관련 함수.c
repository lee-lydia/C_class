#include <stdio.h>
#include <string.h>

int main(void)
{
	/***************************************************************************************
	���� ���� ����� : getchar(), putchar()

	�ڷ��� ������ = getchar(); // ���� �ϳ� ����
	putchar(����� ����); // ����� ������ ���, ��¥ ���ڿ���, ���ڰ� �Էµ� �������� OK
	
	EOF(End of File) ��� : �Է� ����
											- �Լ� ȣ�� ���� �� : �о� ���� ������ X
											- ������(Ctrl+Z) Ȥ�� ��,������(Ctrl+D)
						if (ch == EOF)
							break;
	***************************************************************************************/

	int ch1, ch2;

	ch1 = getchar();
	ch2 = getchar();

	putchar(ch1); putchar(ch2);

	printf("\n");


	/***************************************************************************************
	���� ���� ����� �Լ� : scanf_s()

	char �迭��[n];
	scanf_s("%s", �迭��, (unsigned int) sizeof(�迭��)); // ������ �����ڷ� ���� -> ���� ����
																							// ���� ũ�� ���� �ʿ� (unsigned int ������)
	***************************************************************************************/

	/***************************************************************************************
	printf();

	printf("%s", �迭��); // '\0' ���� ���
	***************************************************************************************/

	char scanfs_string[50];
	printf("scanfs_string ���ڿ��� �Է��ϼ��� : ");
	scanf_s("%s", scanfs_string, (unsigned int)sizeof(scanfs_string));
	printf("%s\n", scanfs_string);


	/***************************************************************************************
	���ڿ� ���� ����� �Լ� : gets_s(), puts()
	
	char �迭��[n];
	gets_s(�迭��, sizeof(�迭��)); // '\n' ���� ('\n' -> '\0')
	puts(�迭��); // �ڵ� �ٹٲ�('\0' -> '\n')
	***************************************************************************************/

	char getss_string[30];
	gets_s(getss_string, 30);
	puts(getss_string);
	printf("\n");


	/***************************************************************************************
	���ڿ� ó�� �Լ� ( #include <string.h> )
	- strlen(str); // ���ڷ� ���޵� �ּ��� ���ڿ����� **�� ���ڸ� ����**�� ���ڿ� ���� ��ȯ
	- strcpy(str1, str2); // �� ��° ���ڷ� ���޵� �ּ��� ���ڿ��� ù ��° ������ �ּҿ� ����
	- strncpy(str1, str2, count); // �� ��° ���ڷ� ���޵� �ּ��� ���ڿ��� ù ��° ������ �ּҿ� �����ϵ�, **���ϴ� ������ŭ�� ����**
	- strcat(str1, str2); // �� ��° ���ڷ� ���޵� �ּ��� ���ڿ��� ù ��° ���ڷ� ���޵� �ּ��� ���ڿ��� �̾� ���̱�
	- strncat(str1, str2, count); // �� ��° ���ڷ� ���޵� �ּ��� ���ڿ��� ù ��° ���ڷ� ���޵� �ּ��� ���ڿ��� �̾� ���̵�, **���ϴ� ������ŭ �̾���̱�**
	- strcmp(str1, str2); // ���ڷ� ���޵� �� ���ڿ��� ���Ͽ� ������ ������ 0��, ���� ������ 0�� �ƴ� ��(str2�� ũ�� ���, str1�� ũ�� ����) ��ȯ
	- strncmp(str1, str2, count); // ���ڷ� ���޵� �� ���ڿ��� ���ϵ�, �� ���ڿ��� �տ������� **���ϴ� ������ŭ�� ��**
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


	// ���۸� ���� ��� : while (getchar() != '\n');
	
	return 0;
}