#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>
int main()
{
	int year;

	scanf(" %d", &year);

	if ((year % 4 == 0 && !(year % 100 == 0)) || year % 400 == 0)
		printf("1");
	else
		printf("0");

	return 0;
}