#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>

int main()
{
	int count;
	char arr[21] = "";

	scanf("%d", &count);
	gets(arr);


	for (int i = 1; arr[i] != NULL; i++) {
		for (int j = 0; j < count; j++)
			printf("%c", arr[i]);
	}

	return 0;
}