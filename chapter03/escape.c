#define _CRT_SECURE_NO_WARNINGS

/* escape.c -- 이스케이프 문자를 사용한다. */
#include <stdio.h>
int main(void) {
	float salary;

	printf("\a원하는 월급 액수를 입력하시오:");
	printf("$_______\b\b\b\b\b\b\b");
	scanf("%f", &salary);

	printf("\n\t월 $%.2f이면 연봉으로 $%.2f입니다.", salary, salary * 12.0);
	printf("\r우와!\n");

	return 0;
}

/* OUTPUT

원하는 월급 액수를 입력하시오:$1234567

우와!   월 $1234567.00이면 연봉으로 $14814804.00입니다.

*/