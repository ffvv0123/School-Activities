#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>

int main()
{
	int num;
	int sum = 0;


	scanf(" %d", &num);

	for (int i = 0; i <= num; i++) {
		sum += i;
	}
	printf("%d", sum);

	return 0;
		
}