#include <stdio.h>

int main(void)
{
	// 국어 86 / 영어 75 / 수학 88 / 사회 60 / 과학 96
	// 평균은 실수로 출력

	float result1, result2, result3, result4, result5, avg1;
	result1 = 86;
	result2 = 75;
	result3 = 88;
	result4 = 60;
	result5 = 96;
	avg1 = (result1 + result2 + result3 + result4 + result5) / 5.0f;
	printf("짱구의 기말고사 평균: %.2f 점\n", avg1);

	// 국어 64 / 영어 56 / 수학 87.5 / 사회 76.8 / 과학 96.9

	float result11, result22, result33, result44, result55, avg2;
	result11 = 64.0f;
	result22 = 56.0f;
	result33 = 87.5f;
	result44 = 76.8f;
	result55 = 96.9f;
	avg2 = (result11 + result22 + result33 + result44 + result55) / 5.0f;
	printf("철수의 기말고사 평균: %.2f 점", avg2);

	return 0;
}