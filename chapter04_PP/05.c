#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float downloadSpeed;
	float fileSize;

	printf("다운로드 속도 입력 (메가비트): ");
	scanf("%f", &downloadSpeed);
	printf("파일 크기 입력 (메가바이트): ");
	scanf("%f", &fileSize);

	float downloadTime = fileSize * 8 / downloadSpeed;

	printf("초당 %.2f 메가비트, %.2f 메가바이트 파일을\n%.2f초에 다운로드한다.",
		downloadSpeed, fileSize, downloadTime);

	return 0;
}