#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	double inch_cm = 2.54; // 1 inch = 2.54 cm
	printf("당신의 키 입력 (cm): ");
	double your_height;
	scanf("%lf", &your_height);

	printf("당신의 키 (inch): %f", your_height / inch_cm);
}