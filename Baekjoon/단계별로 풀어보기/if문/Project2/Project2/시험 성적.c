#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>
int main()
{
	int score;
	char grade;

	scanf(" %d", &score);

	if ((score <= 100) && (score >= 90))
		score = 'A';
	else if ((score < 90) && (score >= 80))
		score = 'B';
	else if ((score < 80) && (score >= 70))
		score = 'C';
	else if ((score < 70) && (score >= 60))
		score = 'D';
	else if ((score < 60) && (score >= 0))
		score = 'F';
		

	printf("%c", score);

	return 0;
}