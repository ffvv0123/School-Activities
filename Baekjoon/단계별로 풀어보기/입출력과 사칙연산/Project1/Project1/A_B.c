#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>
int main()
{
	int A, B;

	scanf(" %d %d", &A, &B);
	printf("%.12g", (double)A / B); // %g는 소수점 아래 필요없는 0을 없앤다.
	return 0;
}