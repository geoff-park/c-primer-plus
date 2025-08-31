/* two-func.c -- Program that uses two functions in one file */
#include <stdio.h>
void butler(void); // ANSI/ISO C Function Prototype
int main(void)
{
	printf("Is function futler out there?\n");
	butler();
	printf("Yes. Bring me a cup of tea, and bring me a DVD.\n");

	return 0;
}

void butler(void) // Function Definition starts here
{
	printf("Yes, Master!\n");
}