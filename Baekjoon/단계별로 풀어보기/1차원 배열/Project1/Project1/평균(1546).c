#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>

int main()
{
	int subject;
	int score[1000] = { 0 };
	int max_score = 0;
	double adjust_score = 0;
	int count = 0;


	scanf(" %d", &subject);

	for (int i = 0; i < subject; i++) {
		scanf(" %d", &score[i]);

		if (score[i] > max_score) {
			max_score = score[i];
		}
		adjust_score += score[i];
		count++;
	}
	adjust_score = adjust_score / max_score * 100 / count;

	printf("%.2f", adjust_score);
}