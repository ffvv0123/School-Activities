#pragma warning(disable:4996) //VS2019 scanf�Լ� ���� ����
#pragma warning(disable:6031) //VS2019 scanf�Լ� ���� ����
#include <stdio.h> //��ó���⿡ stdio.h ���� �ִ´�.

int main()
{
	int trial;

	scanf(" %d", &trial);

	for (int i = 1; i <=trial; i++) {
		for (int j = 1; j <= trial; j++) {
			if (j % 2 == 1) {
				printf("*");
			}
			else printf(" ");
		}
		printf("\n");
		for (int j = 1; j <= trial; j++) {
			if (j % 2 == 1) {
				printf(" ");
			}
			else printf("*");
		}
		printf("\n");
	}
}