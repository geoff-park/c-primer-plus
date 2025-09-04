#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

const double LITER_PER_GALLON = 3.785;
const double KM_PER_MILE = 1.609;

int main(void)
{
	double dis;
	printf("주행 거리(마일): ");
	scanf("%lf", &dis);

	double gas;
	printf("소비한 휘발유의 양(갤런): ");
	scanf("%lf", &gas);

	printf("갤런 당 마일: %.1f\n", dis / gas);
	printf("100킬로미터 당 리터: %.1f\n", ((gas * LITER_PER_GALLON) / (dis * KM_PER_MILE)) * 100);

	return 0;
}