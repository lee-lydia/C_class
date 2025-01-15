#include <stdio.h>

int main(void)
{
	int num1, num2, num3, num4, result1, result2;
	num1 = 3;
	num2 = 4;
	num3 = 5;
	num4 = 6;
	result1 = num1 + num2 + num3 + num4;
	result2 = num1 + num2 * num3 + num4;
	printf("%d + %d + %d + %d = %d\n", num1, num2, num3, num4, result1);
	printf("%d + %d * %d + %d = %d\n", num1, num2, num3, num4, result2); // *¿Í / -> +,-
	return 0;
}