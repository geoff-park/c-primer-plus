#define _CRT_SECURE_NO_WARNINGS

/* charcode.c -- 문자에 대응하는 코드값을 표시한다. */
#include <stdio.h>
int main(void)
{
	char ch;

	printf("키보드를 영문 모드로 놓고, 문자 하나를 입력하시오.\n");
	scanf("%c", &ch); /* 사용자가 문자를 입력한다. */
	printf("문자 %c에 대응하는 코드값은 %d이다.\n", ch, ch);

	return 0;
}

/* OUTPUT

키보드를 영문 모드로 놓고, 문자 하나를 입력하시오.
C
문자 C에 대응하는 코드값은 67이다.

*/