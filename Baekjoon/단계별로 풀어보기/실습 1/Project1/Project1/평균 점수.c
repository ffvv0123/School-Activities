/* 이 문제를 풀려면, 점수를 5번 입력받고, 만약 점수가 40점 보다 낮다면
40점으로 처리. score를 0으로 시작해서, for문으로 조건에 맞게 점수 합을 더하고
평균을 출력한다.*/

#pragma warning(disable:4996) //VS2019 scanf함수 오류 방지
#pragma warning(disable:6031) //VS2019 scanf함수 오류 방지
#include <stdio.h> //전처리기에 stdio.h 파일 넣는다.

int main() // 시작점함수 main 함수. 리턴값은 정수로 받는다.
{
	int score; //입력받을 점수
	int sum = 0; //점수의 총합 =0

	for (int i = 1; i <= 5; i++) { //for문, 5번 반복
		scanf(" %d", &score); //점수 받고
		if (score < 40) {//40점 아래면
			score = 40;//걍 40점 준다.
		}
		sum += score; //총합에 점수 더하고
	}
	printf("%d", sum / 5); //평균 출력

	return 0; //리턴값은 0
}