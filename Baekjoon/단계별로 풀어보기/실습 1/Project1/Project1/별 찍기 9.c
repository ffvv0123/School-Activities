#pragma warning(disable:4996) //VS2019 scanf�Լ� ���� ����
#pragma warning(disable:6031) //VS2019 scanf�Լ� ���� ����
#include <stdio.h> //��ó���⿡ stdio.h ���� �ִ´�.

int main()
{
	int trial;

	scanf(" %d", &trial);

	for (int i = 1; i <= trial; i++) {
		for (int k = 1; i>k; k++) {
			printf(" ");
		}		
		for (int j = 2 * trial - 1; j >= 2*i - 1; j--){
			printf("*");
		}printf("\n");
	}
	for (int i = 1; i < trial; i++) {
		for (int k = trial; i < k-1; k--) {
			printf(" ");
		}
		for (int j = 1; j <= 2*i + 1;j++) {
			printf("*");
		}printf("\n");
	}
}