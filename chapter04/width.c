/* width.c -- 필드 너비 */
#include <stdio.h>
#define PAGES 959
int main(void)
{
	printf("*%d*\n", PAGES);
	printf("*%2d*\n", PAGES); // 2칸 -> 3칸 확장 (수가 세자리이므로)
	printf("*%10d*\n", PAGES); // 10칸 확보
	printf("*%-10d*\n", PAGES); // 10칸 확보, 왼쪽 정렬

	return 0;
}