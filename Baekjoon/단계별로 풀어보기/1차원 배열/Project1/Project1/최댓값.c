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
		printf("�ڿ����� �Է��ϼ���: ");
		scanf(" %d", &num);
		arr[i] = num;
		count++;

		if (max < num) {
			max = num;
			count_max = count;
		}
	}
	printf("�ִ�: %d\n", max);
	printf("%d��° ��", count_max);

	return 0;	
}
