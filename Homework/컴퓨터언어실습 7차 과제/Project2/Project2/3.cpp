#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random {
public:
	static void seed() {
		srand((unsigned)time(0));
	}
	static int nextInt(int min = 0, int max = 32767) {
		int val = min + (rand() % (max - min + 1));
		return val;
	}
	static char nextAlphabet();
	static double nextDouble();
};

char Random::nextAlphabet() {
	int val = rand() % 2;
	if (val == 0) {
		val = 65 + rand() % 26;
		return val;
	}
	else {
		val = 97 + rand() % 26;
		return val;
	}
}

double Random::nextDouble() {
	double val = rand() / (double)(RAND_MAX + 1);
	return val;
}

int main() {
	Random::seed();
	cout << "1에서 100까지 랜덤한 정수 10개를 출력합니다" << endl;

	for (int i = 0; i < 10; i++)
		cout << Random::nextInt(1, 100) << ' ';
	cout << endl;

	cout << "알파벳을 랜덤하게 10개를 출력합니다" << endl;
	for (int i = 0; i < 10; i++)
		cout << Random::nextAlphabet() << ' ';
	cout << endl;

	cout << "랜덤한 실수를 10개를 출력합니다" << endl;
	for (int i = 0; i < 5; i++)
		cout << Random::nextDouble() << ' ';
	cout << endl;

	for (int i = 0; i < 5; i++)
		cout << Random::nextDouble() << ' ';
	cout << endl;

	return 0;
}