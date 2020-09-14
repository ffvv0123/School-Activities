#pragma warning(disable:4996) //VS2019에서 scanf함수 오류 무시
#pragma warning(disable:6031) //VS2019에서 scanf함수 오류 무시
#include<stdio.h> //stdio헤더파일을  전처리기에 넣음

int main() //시작점함수, 정수값을 리턴 받는 메인 함수

{
	int Number; //이 정수형 변수에는 숫자를 입력받음, 이후 결과를 계속 넣는다.
	int result; // 연산 결과를 말한다. 
	int A, B, C, D; // 계산을 위해 필요한 변수
	int count = 0; // 시행 횟수는 0으로 저장. 이후 1씩 증가

	scanf("%d", &Number); // 정수 받고

	result = Number; // result에 입력 받은 값을 넣는다.
	
	while (1) //무한 루프 ON

	{
		A = Number / 10; //규칙을 찾자
		B = Number % 10;
		C = (A + B) % 10;
		D = (B * 10) + C;

		Number = D; //Number에 D값을 집어 넣자.
		count++; //1사이클 끝났으니 추가

		if (D == result) { //만약 처음 입력받은 Number인 result값이 연산 이후 Number인 D와 같다면
			break; // 끝내자.
		}
	}

	printf("%d", count); //시행횟수 출력

	return 0; //리턴반환
}



