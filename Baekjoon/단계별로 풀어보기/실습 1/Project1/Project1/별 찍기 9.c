#pragma warning(disable:4996) //VS2019 scanf함수 오류 방지
#pragma warning(disable:6031) //VS2019 scanf함수 오류 방지
#include <stdio.h> //전처리기에 stdio.h 파일 넣는다.

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