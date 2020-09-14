/* 햄버거의 최소가격, 음료수의 최소가격을 구하고, 합을 해서 -50 하기*/
#pragma warning(disable:4996) //VS2019 scanf함수 오류 방지
#pragma warning(disable:6031) //VS2019 scanf함수 오류 방지
#include <stdio.h> //전처리기에 stdio.h 파일 넣는다.

int main()
{
	int hamburger;
	int drink;
	int min_ham = 2000; //햄버거 최고가격 2000, 이거보다 작으면 최솟값 되게
	int min_drink = 2000; //음료수 최고가격 2000, 이거보다 작으면 최솟값 되게

	for (int i = 1; i <= 3; i++) { //for문으로 3번 반복
		scanf(" %d", &hamburger); //햄버거 가격 받고
		if (hamburger <= min_ham) { //가격 비교
			min_ham = hamburger; //최저 가격
		}
	}
	for (int j = 1; j <= 2; j++) { //for문 2번 반복
		scanf(" %d", &drink); //음료 가격 받고
		if (drink <= min_drink) { //가격 비교
			min_drink = drink; //최저 가격
		}
	}
	printf("%d", min_ham + min_drink - 50); //출력

	return 0;
}