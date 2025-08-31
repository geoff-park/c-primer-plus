#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int year_age;
	double year_sec = 3.156e7;
	scanf("%d", &year_age);
	printf("%f", year_age * year_sec);
}