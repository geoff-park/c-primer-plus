#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float height;
	char name[20];

	printf("키 (인치): ");
	scanf("%f", &height);
	printf("이름: ");
	scanf("%s", name);

	printf("%s 씨, 당신의 키는 %.3f 피트입니다.", name, height / 12);

	return 0;
}