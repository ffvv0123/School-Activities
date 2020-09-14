#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>
#define ARR_SIZE 9

int main()
{
	int num;
	int max = 0;
	int count =0, count_max;
	int arr[ARR_SIZE] = { 0, };

	for (int i = 0; i < ARR_SIZE; i++) {
		printf("자연수를 입력하세요: ");
		scanf(" %d", &num);
		arr[i] = num;
		count++;

		if (max < num) {
			max = num;
			count_max = count;
		}
	}
	printf("최댓값: %d\n", max);
	printf("%d번째 수", count_max);

	return 0;	
}
