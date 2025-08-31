/* print2.c -- printf()의 추가적인 특성을 설명한다. */
#include <stdio.h>
int main(void)
{
	unsigned int un = 3000000000; // 32bit int형과
	short end = 200; // 16bit short형을 사용하는 시스템
	long big = 65537;
	long long verybig = 12345678908642;

	printf("un = %u and not %d\n", un, un);
	printf("end = %hd and %d\n", end, end); // %hd: short형 정수를 10진수로 출력한다.
	printf("big = %ld and not %hd\n", big, big); // %ld: long형 값 출력
	printf("verybig = %lld and not %ld\n", verybig, verybig); // %lld: long long형

	return 0;
}