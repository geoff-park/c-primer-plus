#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	double number;
	printf("부동소수점 수를 입력하시오: ");
	scanf("%lf", &number);

	printf("고정소수점 표기: %f\n", number);
	printf("지수 표기: %e\n", number);
	printf("p 표기: %a\n", number);
}