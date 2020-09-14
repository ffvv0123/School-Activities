#pragma warning(disable:4996) 
#pragma warning(disable:6031) 
#include <stdio.h> 
#define SIZE 10000

void self_number(int*);
int sum_number(int);

int main()
{
	int self[SIZE] = { 0 };

	self_number(&self);

	for (int i = 0; i < SIZE; i++) {
		if (self[i] != 0) {
			printf("%d\n", self[i]);
		}
	}

	return 0;
}

void self_number(int* self)
{
	int list[SIZE] = { 0 };
	int check = 0;

	for (int i = 0; i < SIZE; i++) {
		list[i] = sum_number(i + 1);
	}
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			if (i + 1 == list[j])
				check++;
		}
		if (check == 0) {
			self[i] = i + 1;
		}
		check = 0;
	}
}

int sum_number(int num)
{
	int t_thou, thou, t_ten, ten, one;
	int sum;

	t_thou = num / 10000;
	thou = (num % 10000) / 1000;
	t_ten = (num % 1000) / 100;
	ten = (num % 100) / 10;
	one = num % 10;

	sum = num + t_thou + thou + t_ten + ten + one;

	return sum;
}