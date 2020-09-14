#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>

int main()
{
	int A, B, N;

	scanf(" %d", &N);

	for (int i = 0, j = 1; j <= N; i++, j++) {
		scanf(" %d %d", &A, &B);
		printf("Case #%d: %d + %d = %d\n", j, A, B, A + B);
	}

	return 0;
}