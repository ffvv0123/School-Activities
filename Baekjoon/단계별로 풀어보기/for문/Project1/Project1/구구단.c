#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>

int main()
{
	int  n;

	scanf(" %d", &n);

	for (int i = 1; i < 10; i++)
		printf("%d * %d = %d\n", n,i, n * i);

	return 0;
}