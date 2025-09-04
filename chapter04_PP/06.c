#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char firstName[20];
	char lastName[20];

	printf("이름 입력: ");
	scanf("%s", firstName);
	printf("성 입력: ");
	scanf("%s", lastName);

	printf("%s %s\n", lastName, firstName);
	printf("%*d %*d\n\n", strlen(lastName), strlen(lastName), strlen(firstName), strlen(firstName));

	printf("%s %s\n", lastName, firstName);
	printf("%-*d %-*d\n\n", strlen(lastName), strlen(lastName), strlen(firstName), strlen(firstName));

	return 0;
}