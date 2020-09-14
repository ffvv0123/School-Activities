/* 세 수를 입력받고, 두 번째로 큰 수를 찾자
다양한 방법이 있다. 배열, 삼항연산자, if문 등등..
이번에는 삼항연산자 써본다.*/
#pragma warning(disable:4996) //VS2019 scanf함수 오류 방지
#pragma warning(disable:6031) //VS2019 scanf함수 오류 방지
#include <stdio.h> //전처리기에 stdio.h 파일 넣는다.

int main()
{
	int A, B, C; //숫자 설정
	int semi_1, semi_2, semi_3, semi_c, semi; //대소비교를 위한 변수지정. 솔직히 깔끔하다고 생각되지는 않음

	scanf(" %d %d %d", &A, &B, &C); //숫자 받고

	semi_1 = A >= B ? A : B; // A, B 중에서 큰 거
	semi_2 = B >= C ? B : C; // B, C 중에서 큰 거
	semi_3 = A >= C ? A : C; // A, C 중에서 큰 거

	semi_c = semi_1 >= semi_2 ? semi_2 : semi_1; // semi 1 2 중에서 작은 거
	semi = semi_c >= semi_3 ? semi_3 : semi_c; // semi c 3 중에서 작은 거

	printf("%d", semi); //semi 출력

	return 0;
}
/*
if (a > b) {
	if (a > c) { //a>b,c
		if (b > c) printf("%d", b); a>b>c
		else printf("%d", c); a>c>b
	}
	else printf("%d", a); c>a>b
}
else{
if (a < c) c>a,b
{
	if (b < c) printf("%d", b); c>b>a
	else printf("%d", c); b>c>a
}
else printf("%d", a); c>a>b
}
*/
	