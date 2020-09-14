/* 주어진 규칙을 찾아보자. 늘어나다가 줄어든다.
for문 중첩한 블록을 2번 쓰자. (증가, 감소)*/
#pragma warning(disable:4996) //VS2019 scanf함수 오류 방지
#pragma warning(disable:6031) //VS2019 scanf함수 오류 방지
#include <stdio.h> //전처리기에 stdio.h 파일 넣는다.

int main()
{
	int trial; //횟수 설정

	scanf(" %d", &trial); //횟수 받고

	for (int j = 1; j <= trial; j++) { //증가하는 for문 여기선 줄 바꿈 for문
		for (int i = 1; i <= j; i++) { //증가하는 for문 여기선 별 찍음
			printf("*");
		}printf("\n");
	}

	for (int j = 1; j < trial; j++) { //감소하는 for문 여기선 줄 바꿈 for문
		for (int i = trial; i >j ; i--) { //감소하는 for문 여기선 별 찍음
			printf("*");
		}printf("\n");
	}
}