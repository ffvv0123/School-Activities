#include <iostream>
using namespace std;

int prime(int num);
int find_trial(int input, int output);

int main()
{
	int test, input, output;
	cin >> test;
	
	for (int i = 0; i < test; i++)
		cin >> input >> output;


}

int prime(int num) {
	for (int i = 2; i < num; i++) {
		if (num % i == 0)
			return 0;
	}
	return 1;
}

int find_trial(int input, int output) {
	int count = 0;
}