#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>
int main()
{
	int A, B;

	scanf(" %d %d", &A, &B);
	printf("%.12g", (double)A / B); // %g�� �Ҽ��� �Ʒ� �ʿ���� 0�� ���ش�.
	return 0;
}