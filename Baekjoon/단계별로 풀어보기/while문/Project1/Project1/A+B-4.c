#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>

int main()
{
	int A, B;

	while (scanf(" %d %d", &A, &B) != EOF) { // EOF는 end of file 의 약자. 파일의 끝에 도달 했을때 반환하며 이 값은 -1 이다. 윈도우 명령창에서 ctrl+z로 발생 가능
		printf("%d\n", A + B);

	}
	return 0;
}