#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>

int main()
{
	int A, B;

	scanf(" %d %d", &A, &B);

	while (A != 0 && B != 0) {
		printf("%d\n", A + B);
		scanf(" %d %d", &A, &B);
	
	} 
	return 0;
}