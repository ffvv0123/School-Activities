#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>
int main()
{
	int A, B;

	scanf(" %d %d", &A, &B);

	if (A > B)
		printf(">");

	else if (A == B)
		printf("==");

	else
		printf("<");

	return 0;
}