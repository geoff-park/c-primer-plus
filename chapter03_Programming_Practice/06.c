#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	double water_mol_mass = 3.0e-23; // 물 분자의 질량
	int quart_gram = 950; // 1 quart = 950 gram

	double water_amount;
	printf("물의 양 입력 (쿼크): ");
	scanf("%lf", &water_amount); // 쿼크 단위로 물의 양 입력받기
	printf("물 분자의 개수: %f\n", (water_amount * quart_gram) / water_mol_mass);
}