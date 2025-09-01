/* stringf.c -- 문자열 포맷 */
#include <stdio.h>
#define BLURM "Authentic imitation!"
int main(void)
{
	printf("[%2s]\n", BLURM);
	printf("[%24s]\n", BLURM);
	printf("[%24.5s]\n", BLURM);
	printf("[%-24.5s]\n", BLURM);

	return 0;
}

/* OUTPUT
[Authentic imitation!]
[    Authentic imitation!]
[                   Authe]
[Authe                   ]
*/