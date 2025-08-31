/* bases.c -- 100을 10진수, 8진수, 16진수 표기로 출력한다. */
#include <stdio.h>
int main(void)
{
	int x = 100;

	printf("10진수 = %d; 8진수 = %o; 16진수 = %x\n", x, x, x);
	printf("10진수 = %d; 8진수 = %#o; 16진수 = %#x\n", x, x, x);

	return 0;
}

// OUTPUT
// 
// 10진수 = 100; 8진수 = 144; 16진수 = 64
// 10진수 = 100; 8진수 = 0144; 16진수 = 0x64