#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	double num;

	scanf("%lf", &num);

	printf("입력된 것은 %.1f 또는 %.1e이다.\n", num, num);
	printf("입력된 것은 %+.3f 또는 %.3E이다.\n", num, num);

	return 0;
}