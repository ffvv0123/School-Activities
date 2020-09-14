#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>
int main()
{
	int A, B;

	scanf(" %d",&A);
	scanf(" %d",&B);
	
	printf("%d\n", A * (B % 10));
	printf("%d\n", A * ((B % 100)/10));
	printf("%d\n", A * (B / 100));
	printf("%d\n", A * B);

	return 0;
}