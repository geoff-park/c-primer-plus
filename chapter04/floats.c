// floats.c -- 몇 가지 부동소수점형 포맷 지정자의 사용
#include <stdio.h>

int main(void)
{
	const double RENT = 3852.99; // const로 지정한 상수
	
	// *전체 N자리라는 뜻은, 최소 N자리를 의미함
	// 즉, 확장이 필요하다면 확장 가능!

	printf("*%f*\n", RENT); // 소수점 아래 6자리
	printf("*%e*\n", RENT); // 소수점 아래 6자리 (지수 표기)
	printf("*%4.2f*\n", RENT); // 전체 4자리, 소수점 아래 2자리
	printf("*%3.1f*\n", RENT); // 전체 3자리, 소수점 아래 1자리
	printf("*%10.3f*\n", RENT); // 전체 10자리, 소수점 아래 3자리
	printf("*%10.3E*\n", RENT); // 전체 10자리, 소수점 아래 3자리 (지수 표기)
	printf("*%+4.2f*\n", RENT); // 전체 4자리, 소수점 아래 2자리 (부호 표기)
	printf("*%010.2f*\n", RENT); // 전체 10자리, 소수점 아래 2자리, 빈 공간은 0으로 채움!

	return 0;
}