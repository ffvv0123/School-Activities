#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>

int main()
{
	int A, B, N;

	scanf(" %d", &N);

	for (int i = 0; i < N; i++) {
		scanf(" %d %d", &A, &B);
		printf("%d\n", A + B);
	}

	return 0;
}