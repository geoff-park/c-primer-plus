#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n;
	char c;

	printf("INPUT ASCII CODE VALUE: ");
	scanf("%d", &n);

	c = n;
	printf("ASCII CHARACTER: %c", c);
}