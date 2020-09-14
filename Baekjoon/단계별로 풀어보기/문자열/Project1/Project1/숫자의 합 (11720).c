#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>
#include <string.h>

int main()
{
	char arr[101] = "";
	int size;
	int sum = 0;

	scanf("%d", &size);
	scanf(" %s", &arr);

	for (int i = 0; i < size; i++) {
		sum += (arr[i] - 48);
	}
	printf("%d", sum);
}