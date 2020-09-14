#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>
#define N 1000

int main()
{
	int test;
	int number;
	int score[N] = { 0 };
	double sum = 0;
	double avg = 0;
	int count = 0;

	scanf(" %d", &test);

	for (int i = 0; i < test; i++) {
		scanf("%d", &number);
		for (int j = 0; j < number; j++) {
			scanf(" %d", &score[j]);
			sum += score[j];
		}

		avg = sum / number;

		for (int j = 0; j < number; j++) {
			if (score[j] > avg) {
				count++;
			}
		}

		avg = (double)count / number * 100;
		sum = 0;
		count = 0;

		printf("%.3f%%\n", avg);
	}

	return 0;
}