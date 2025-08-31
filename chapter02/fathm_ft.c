// fathm_ft.c -- convert 2 fathoms to feet

#include <stdio.h>
int main(void)
{
	int feet, fathoms;

	fathoms = 2;
	feet = 6 * fathoms;
	printf("%d fathoms is %d feet!\n", fathoms, feet);
	printf("Yes, %d feet.\n", 6 * fathoms);

	return 0;
}