#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char firstName[20]; // 이름
	char lastName[20]; // 성
	
	printf("Your first name: ");
	scanf("%s", firstName);
	printf("Your last name: ");
	scanf("%s", lastName);

	printf("%s %s", lastName, firstName);
}