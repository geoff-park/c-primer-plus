#include <stdio.h>

void jelly(void);
void deny(void);

int main(void)
{
	printf("For he's a ");
	jelly();
	printf(" fellow!\n");

	printf("For he's a ");
	jelly();
	printf(" fellow!\n");

	printf("For he's a ");
	jelly();
	printf(" fellow!\n");

	deny();
}

void jelly(void)
{
	printf("jelly good");
}

void deny(void)
{
	printf("Which nobody can deny!");
}