#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <float.h>

int main(void)
{
	double dblVar = 1.0 / 3.0;
	float fltVar = 1.0 / 3.0;

	printf("dblVar: %.4f %.12f %.16f\n", dblVar, dblVar, dblVar);
	printf("fltVar: %.4f %.12f %.16f\n\n", fltVar, fltVar, fltVar);

	printf("FLT_DIG: %d, DBL_DIG: %d", FLT_DIG, DBL_DIG);
	// FLT_DIG: "# of decimal digits of precision" = 6
	// DBL_DIG: "# of decimal digits of precision" = 15

	return 0;
}