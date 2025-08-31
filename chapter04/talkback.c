#define _CRT_SECURE_NO_WARNINGS

// talkback.c -- 수다스럽지만, 정보를 주는 프로그램
#include <stdio.h>
#include <string.h> // strlen() prototype을 사용하기 위해
#define DENSITY 62.4 // 신체밀도 (입방피트당 파운드 수)
int main(void)
{
	float weight, volume;
	int size, letters;
	char name[40]; // name은 영문자로 40개를 넣을 수 있는 배열이다.
	
	printf("YO! お名前は何ですか?\n");
	scanf("%s", name);
	printf("%s 씨, 몸무게는 몇 파운드나 나가요?\n", name);
	scanf("%f", &weight);
	size = sizeof name;		// size: name을 저장하기 위해 필요한 바이트수
	letters = strlen(name);	// letters: 글자 수
	volume = weight / DENSITY;

	printf("옳거니, %s 씨의 몸은 %2.2f입방피트를 차지합니다.\n", name, volume);
	printf("그리고 이름이 %d글자니까,\n", letters);
	printf("저장하려면 %d바이트가 필요합니다.\n", size);

	return 0;
}

/* sample output
YO! お名前は何ですか?
Christine
Christine 씨, 몸무게는 몇 파운드나 나가요?
154
옳거니, Christine 씨의 몸은 2.47입방피트를 차지합니다.
그리고 이름이 9글자니까,
저장하려면 40바이트가 필요합니다.
*/