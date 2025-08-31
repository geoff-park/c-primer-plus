#include <stdio.h>
#include <limits.h> /* 정수형 타입의 최소/최대값이 매크로로 정의 */
#include <float.h>  /* 부동소수점형 타입의 최소/최대값이 매크로로 정의 */
int main(void)
{
	int i_min = INT_MIN;
	int i_max = INT_MAX;
	double dbl_min = DBL_MIN;
	double dbl_max = DBL_MAX;

	printf("INT_MIN - 1 = %d\n", i_min - 1);
	printf("INT_MAX + 1 = %d\n", i_max + 1);
	printf("DOUBLE_MIN / 2.0 = %.20e\n", dbl_min / 2.0);
	printf("DOUBLE_MAX * 2.0 = %.20e\n", dbl_max * 2.0);
}