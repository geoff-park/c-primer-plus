#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int p_c = 2;
	int c_o = 8;
	int o_table = 2;
	int table_tea = 3;

	double v;
	printf("부피를 입력하세요 (cup): ");
	scanf("%lf", &v);

	printf("%f pints\n", v / p_c);
	printf("%f ounces\n", v * c_o);
	printf("%f tablespoons\n", v * c_o * o_table);
	printf("%f teaspoons\n", v * c_o * o_table * table_tea);

	// 부동소수점형이 정수형보다 더 적합한 이유?
	// 1. 단위 변환에서 분수가 자주 등장
	// 2. 현실 세계 단위는 대부분 소수점 단위
	// 3. 오버플로 문제: double은 int보다 더 큰 범위를 표현할 수 있다!
}