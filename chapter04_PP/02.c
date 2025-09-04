#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // need for `strlen()`
int main(void)
{
	char name[10];
	
	printf("Your name: ");
	scanf("%s", name);

	printf("a.\n");
	printf("\"%s\"\n", name);
	
	printf("b.\n");
	printf("\"%20s\"\n", name);

	printf("c.\n");
	printf("\"%-20s\"\n", name);

	printf("d.\n");
	printf("%*s", strlen(name) + 3, name);

	return 0;
}